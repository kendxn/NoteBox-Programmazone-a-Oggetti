#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "notaMultimediale.h"
#include "notaAvanzato.h"
#include "viewPanel.h"
#include "editCard.h"
#include "promemoria.h"
#include "searchWindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {

    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(1);
    ui->menubar->hide();
    ui->toolBar->hide();

    // Connessione bottoni Overlay
    connect(ui->buttonInizia, &QPushButton::clicked, this, &MainWindow::iniziaProgramma);
    connect(ui->buttonImporta, &QPushButton::clicked, this, [this](){
        on_actionCarica_triggered();
        iniziaProgramma();
    });


    // lista shortcut
    QShortcut *shortcutSidebar = new QShortcut(QKeySequence("Alt+B"), this);
    QShortcut *shortcutLabel = new QShortcut(QKeySequence("Alt+E"), this);
    QShortcut *scRicerca = new QShortcut(QKeySequence("Alt+S"), this);
    QShortcut *scAggiungi = new QShortcut(QKeySequence("Alt+A"), this);

    // connessione shortcut alle azioni
    connect(shortcutSidebar, &QShortcut::activated, ui->pushButton_5, &QPushButton::click);
    connect(shortcutLabel, &QShortcut::activated, ui->buttonEtichetteAdd, &QPushButton::click);
    connect(ui->actionCarica, &QAction::triggered, this, &MainWindow::on_actionCarica_triggered);
    connect(scRicerca, &QShortcut::activated, this, [this](){
        ui->lineSearch->setFocus(); apriOverlayRicerca();
    });
    connect(scAggiungi, &QShortcut::activated, this, [this](){
        ui->boxTesto->setFocus();
    });

    // ascolto eventi per ricerca e inserimento
    ui->lineSearch->installEventFilter(this);
    ui->boxTesto->installEventFilter(this);

    // set-up iniziale
    ui->boxTesto->setMaximumHeight(40);
    ui->boxTesto->setMinimumHeight(40);
    ui->boxTesto->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    ui->frameTitolo->hide();
    ui->frameInput2->hide();
    ui->frameButtonScandenza->show();
    ui->frameScadenza->hide();

    // set-up informazioni di data
    QDateTime dataCorrente = QDateTime::currentDateTime();
    ui->dateEdit->setDateTime(dataCorrente);
    ui->dateEdit->setMinimumDateTime(dataCorrente);

    // Gestione Etichette
    elencoEtichette = {"Generico"};
    aggiornaMenuEtichette();
    for(const QString &et : elencoEtichette) {
        if (et != "Generico") {
            creaWidgetEtichetta(et);
        }
    }
}
MainWindow::~MainWindow()
{
    delete ui;
}

// Schermata home
void MainWindow::iniziaProgramma() {
    ui->stackedWidget->setCurrentIndex(0);
    ui->menubar->show();                   // Mostra i menu
    ui->toolBar->show();               // Mostra la toolbar
}

// gestione modifiche etichette
void MainWindow::aggiornaMenuEtichette() {
    ui->comboBox->clear();
    ui->comboBox->addItems(elencoEtichette);
}

// gestione ridimensionamento finestre
int MainWindow::calcolaColonne() {
    int larghezzaFinestra = this->width();
    int larghezzaMinimaCard = 600;
    int colonne = larghezzaFinestra / larghezzaMinimaCard;

    if (colonne < 1) colonne = 1; // Almeno una colonna sempre
    if (colonne > 3) colonne = 3; // Massimo 3

    return colonne;
}

// gestione aggiornamento delle carte
void MainWindow::riposizionaCards() {
    // pulizia
    QLayoutItem *child;
    while ((child = ui->gridLayout->takeAt(0)) != nullptr) {
        if (child->widget()) {
            child->widget()->deleteLater();
        }
        delete child;
    }

    // overlay
    viewPanel* vOverlay = this->findChild<viewPanel*>();
    if (vOverlay) vOverlay->setGeometry(0, 0, this->width(), this->height());

    editCard* eOverlay = this->findChild<editCard*>();
    if (eOverlay) eOverlay->setGeometry(0, 0, this->width(), this->height());

    // filtreggio
    int colonnaCorrente = 0;
    int rigaCorrente = 0;
    int maxColonne = calcolaColonne();

    for (nota* n : listaNote) {
        bool mostra = false;

        // Uso l'enum VistaAttuale per decidere cosa mostrare
        switch (filtroCorrente) {
        case TUTTE:
            mostra = true;
            break;

        case SOLO_PROMEMORIA:
            // Se promemoria e ha data valida
            if (promemoria* p = dynamic_cast<promemoria*>(n)) {
                if (p->getScadenza().isValid()) {
                    mostra = true;
                }
            }
            break;

        case SOLO_TASK:
            // basta cast
            if (dynamic_cast<notaTask*>(n)) {
                mostra = true;
            }
            break;

        case SOLO_MULTIMEDIALE:
            // percorso immagine non vuoto
            if (notaMultimediale* nm = dynamic_cast<notaMultimediale*>(n)) {
                if (!nm->percorsoMedia.isEmpty() && nm->percorsoMedia != "Inserire immagine") {
                    mostra = true;
                }
            }
            break;
        }

        if (mostra && !etichettaCorrente.isEmpty()) {
            if (n->etichetta != etichettaCorrente) {
                mostra = false;
            }
        }

        if (!mostra) continue;

        // connessione a card
        cardWidget *card = new cardWidget(this);
        card->setData(n);
        connect(card, &cardWidget::deleteRequested, this, &MainWindow::rimuoviCard);
        connect(card, &cardWidget::editRequested, this, &MainWindow::apriEditor);
        connect(card, &cardWidget::viewRequested, this, &MainWindow::mostraDettaglioNota);

        // aggiorno griglia
        ui->gridLayout->addWidget(card, rigaCorrente, colonnaCorrente);

        colonnaCorrente++;
        if (colonnaCorrente >= maxColonne) {
            colonnaCorrente = 0;
            rigaCorrente++;
        }
    }
}

// gestione inserimento e ricerca
bool MainWindow::eventFilter(QObject *obj, QEvent *event) {

    // ricerca
    if (event->type() == QEvent::MouseButtonPress) {
        if (obj == ui->lineSearch) {
            apriOverlayRicerca();
            return true;
        }
    }

   // inserimento, espansione box campi
    if (obj == ui->boxTesto && event->type() == QEvent::FocusIn) {
        ui->frameInput2->show();
        ui->frameTitolo->show();
        ui->boxTesto->setMinimumHeight(200);
        ui->boxTesto->setMaximumHeight(999);
        ui->boxTesto->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

    }

    // return eventi
    return QMainWindow::eventFilter(obj, event);
}

// panello overlay per ricerca
void MainWindow::apriOverlayRicerca() {

    searchWindow *search = new searchWindow(this);

    search->setGeometry(0, 0, this->width(), this->height());
    search->setDatiRicerca(this->listaNote);
    search->show();

}

// display dettagli nota
void MainWindow::mostraDettaglioNota(nota* n) {

    if (!n) return; // controllo se nota valida

    viewPanel *overlay = new viewPanel(this);

    overlay->setGeometry(0, 0, this->width(), this->height());
    overlay->caricaDati(n);
    overlay->show();
    overlay->raise(); // forza primo piano
}



// reazione a ridimensionamenti di finestra
void MainWindow::resizeEvent(QResizeEvent *event) {
    QMainWindow::resizeEvent(event);
    riposizionaCards(); // aggiorna la griglia
}

// inserimento carta e aggionramento grafico
void MainWindow::addCard(nota *data) {

    if (!data) return; // controllo di sicurezza

    listaNote.prepend(data);
    riposizionaCards();
}

// rimozione e aggiornamento grafico
void MainWindow::rimuoviCard(cardWidget* widget) {

    if (!widget) return;

    nota* dataDaEliminare = widget->getCurrentData();

    if (dataDaEliminare) {
        listaNote.removeOne(dataDaEliminare);
        delete dataDaEliminare;
    }

    ui->gridLayout->removeWidget(widget);
    widget->deleteLater();
    riposizionaCards();

}

// azione bottone immagine
void MainWindow::on_buttonImmagine_clicked()
{
    ui->frameInput2->show();
    ui->frameTitolo->show();
    ui->boxTesto->setMinimumHeight(40);
    ui->boxTesto->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

    // finestra selezione
    QString filePath = QFileDialog::getOpenFileName(
        this,
        tr("Seleziona Immagine"),
        QDir::homePath(),
        tr("Immagini (*.png *.jpg *.jpeg *.bmp);;Tutti i file (*.*)")
        );

    if (!filePath.isEmpty()) {
        QFileInfo info(filePath);
        QString fileName = info.fileName();

        QDir dir;
        if (!dir.exists("media")) {
            dir.mkdir("media");
        }

        QString destinazione = "media/" + fileName;


        if (!QFile::exists(destinazione)) {
            QFile::copy(filePath, destinazione);
        }

        ui->labelImmagine->setText(destinazione);
        ui->labelImmagine->setWordWrap(true);
    }
}

// azione chiudi inserimento immagine
void MainWindow::on_buttonClose_clicked()
{
    ui->frameInput2->hide();
    ui->frameTitolo->hide();
    ui->boxTesto->setMinimumHeight(40);
    ui->boxTesto->setMaximumHeight(40);
    ui->boxTesto->clear();
    ui->boxTesto->clearFocus();
    ui->labelImmagine->setText("Inserire immagine");
    ui->frameScadenza->hide();
    ui->frameButtonScandenza->show();
    ui->checkTask->setChecked(false);
    ui->lineTitolo->clear();
    ui->frameImmagine->show();
    ui->frameTask->show();
}


// azione bottone salva
void MainWindow::on_buttonSalva_clicked()
{
    // recupero dati
    QString titolo = ui->lineTitolo->text();
    QString testo = ui->boxTesto->toPlainText();
    QString path = ui->labelImmagine->text();

    // controllo sicurezza
    if (titolo.isEmpty() && testo.isEmpty()) {
        QMessageBox::warning(this, "Nota Vuota", "Non puoi salvare una nota senza titolo o testo!");
        return;
    }

    // Logica creazione nota polimorfica

    nota* nuovanota = nullptr;

    // le condizioni dai widget
    bool vuoleTask = ui->checkTask->isChecked();
    bool haScadenza = ui->frameScadenza->isVisible();
    bool haImmagine = (path != "Inserire immagine" && !path.isEmpty());

    int counter = (vuoleTask ? 1 : 0) + (haScadenza ? 1 : 0) + (haImmagine ? 1 : 0);

    // se ha >=2  allora diventa una nota avanzata in automatica
    if (counter > 1) {
        notaAvanzato* na = new notaAvanzato();
        na->completata = vuoleTask ? false : false;
        na->percorsoMedia = haImmagine ? path : "";

        // richiede scadenza?
        if (haScadenza) {
            na->setScadenza(ui->dateEdit->dateTime());
        } else {

            na->setScadenza(QDateTime());
        }
        nuovanota = na;
    }
    // gestione singoli casi: task, promemoria e immagine altrimenti nota generica
    else if (vuoleTask) {
        notaTask* t = new notaTask();
        t->completata = false;
        nuovanota = t;
    }
    else if (haScadenza) {
        promemoria* p = new promemoria();
        p->setScadenza(ui->dateEdit->dateTime());
        nuovanota = p;
    }
    else if (haImmagine) {
        notaMultimediale* nm = new notaMultimediale();
        nm->percorsoMedia = path;
        nuovanota = nm;
    }
    else {
        nuovanota = new nota();
    }

    // assegnazione campi comuni
    nuovanota->id = QDateTime::currentMSecsSinceEpoch();
    nuovanota->titolo = titolo.isEmpty() ? "<senza titolo>" : titolo;
    nuovanota->testo = testo;
    nuovanota->etichetta = ui->comboBox->currentText();
    nuovanota->nomeAssegnatore = ui->lineAssegnatore->text().isEmpty() ? "io" : ui->lineAssegnatore->text();
    nuovanota->dataAssegnazione = QDate::currentDate();

    // aggiungo nuova nota
    this->addCard(nuovanota);

    // reset grafico
    ui->lineTitolo->clear();
    ui->boxTesto->clear();
    ui->labelImmagine->setText("Inserire immagine");
    ui->labelImmagine->setPixmap(QPixmap()); // Pulisce l'anteprima se presente
    ui->checkTask->setChecked(false);
    ui->dateEdit->setDateTime(QDateTime::currentDateTime()); // Torna a oggi

    // Reset Grafico
    ui->frameInput2->hide();
    ui->frameTitolo->hide();
    ui->frameScadenza->hide();
    ui->frameButtonScandenza->show();
    on_buttonClose_clicked();
}

// gestione azione modifica
void MainWindow::apriEditor(nota *data) {

    if (!data) return;
    editCard *editor = new editCard(this);
    editor->setGeometry(0, 0, this->width(), this->height());
    editor->setEtichetteDisponibili(this->elencoEtichette);
    editor->caricaDati(data);

    // seleziona indice
    int index = elencoEtichette.indexOf(data->etichetta);
    if(index != -1) ui->comboBox->setCurrentIndex(index);

    connect(editor, &editCard::salvataggioCompletato, this, [this]() {
        this->riposizionaCards();
    });

    editor->show();
    editor->raise();
}

void MainWindow::on_buttonSetScadenza_clicked()
{

    ui->frameButtonScandenza->hide();
    ui->frameScadenza->show();
}

// --- Gestione delle etichette ---

void MainWindow::on_buttonEtichetteAdd_clicked() {

    bool ok;
    QString nomeLabel = QInputDialog::getText(this, tr("Nuova Etichetta"), tr("Nome:"), QLineEdit::Normal,"", &ok);

    if (ok && !nomeLabel.isEmpty()) {
        if (!elencoEtichette.contains(nomeLabel)) {
            elencoEtichette.append(nomeLabel);

            creaWidgetEtichetta(nomeLabel);
            ui->comboBox->addItem(nomeLabel);
        }
    }
}
void MainWindow::creaWidgetEtichetta(const QString &nome) {
    // container con layout
    if (!ui->frameLabel->layout()) {
        QVBoxLayout *vbox = new QVBoxLayout(ui->frameLabel);
        vbox->setSpacing(5);
        vbox->setAlignment(Qt::AlignTop);
    }

    QFrame *rigaEtichetta = new QFrame(ui->frameLabel);
    rigaEtichetta->setObjectName("riga_" + nome);

    QHBoxLayout *layoutRiga = new QHBoxLayout(rigaEtichetta);
    layoutRiga->setContentsMargins(5, 2, 5, 2);

    QLabel *lbl = new QLabel(nome, rigaEtichetta);
    lbl->setStyleSheet("font-weight: bold;");

    // pulsanti utili
    QPushButton *btnMostra = new QPushButton("Mostra", rigaEtichetta);
    QPushButton *btnCancella = new QPushButton("X", rigaEtichetta);
    btnCancella->setFixedWidth(30);
    btnCancella->setStyleSheet("color: white; border-radius: 5px;");

    layoutRiga->addWidget(lbl);
    layoutRiga->addStretch();
    layoutRiga->addWidget(btnMostra);
    layoutRiga->addWidget(btnCancella);

    ui->frameLabel->layout()->addWidget(rigaEtichetta);

    // fltro etichetta
    connect(btnMostra, &QPushButton::clicked, this, [this, nome]() {
        this->filtraPerEtichetta(nome);
    });

    // cancella
    connect(btnCancella, &QPushButton::clicked, this, [this, rigaEtichetta, nome]() {

        elencoEtichette.removeOne(nome);

        for (nota* n : listaNote) {
            if (n->etichetta == nome) {
                n->etichetta = "Generico";
            }
        }

        rigaEtichetta->deleteLater();   // rimuove il widget della sidebar

        int idx = ui->comboBox->findText(nome);
        if (idx != -1) ui->comboBox->removeItem(idx);
        this->riposizionaCards();

    });

    connect(btnCancella, &QPushButton::clicked, this, [this, rigaEtichetta, nome]() {
        elencoEtichette.removeOne(nome);
        rigaEtichetta->deleteLater();

        int idx = ui->comboBox->findText(nome);
        if (idx != -1) ui->comboBox->removeItem(idx);
    });
}

void MainWindow::filtraPerEtichetta(const QString &tag) {

    this->etichettaCorrente = tag;
    riposizionaCards();
}

// --- Saltavataggio e Importazione di dati in formato Json ---


void MainWindow::salvaDati() {
    QString path = QFileDialog::getSaveFileName(this, "Salva Note", "", "JSON Files (*.json)");
    if (path.isEmpty()) return;

    QJsonArray arrayNote;
    for (nota* n : listaNote) {
        arrayNote.append(n->toJson());
    }

    QJsonDocument doc(arrayNote);
    QFile file(path);
    if (file.open(QIODevice::WriteOnly)) {
        file.write(doc.toJson());
        file.close();
    }
}

void MainWindow::caricaDati() {

    QString path = QFileDialog::getOpenFileName(this, "Importa Note", "", "JSON Files (*.json)");
    if (path.isEmpty()) return;

    QFile file(path);
    if (!file.open(QIODevice::ReadOnly)) return;

    qDeleteAll(listaNote);
    listaNote.clear();

    QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
    QJsonArray arrayNote = doc.array();

    for (int i = 0; i < arrayNote.size(); ++i) {
        QJsonObject obj = arrayNote[i].toObject();
        QString tipo = obj["tipo"].toString();

        nota* n = nullptr;
        if (tipo == "task") n = new notaTask();
        else if (tipo == "promemoria") n = new promemoria();
        else if (tipo == "avanzato") n = new notaAvanzato();
        else n = new nota();

        n->titolo = obj["titolo"].toString();
        n->testo = obj["testo"].toString();
        n->etichetta = obj["etichetta"].toString();
        listaNote.append(n);
    }

    file.close();
    riposizionaCards();
}

// --- gestione azione di bottoni

// nascondi sidebar
void MainWindow::on_pushButton_5_clicked()
{
    ui->frameSideBar->isVisible() ? ui->frameSideBar->hide() : ui->frameSideBar->show();
}

// filtri per mostrare le gerachie delle note
void MainWindow::on_buttonNote_clicked() {
    filtroCorrente = TUTTE;
    etichettaCorrente = ""; // Reset dell'etichetta
    riposizionaCards();
}

void MainWindow::on_buttonPromemoria_clicked() {
    filtroCorrente = SOLO_PROMEMORIA;
    riposizionaCards();
}

void MainWindow::on_buttonTask_clicked() {
    filtroCorrente = SOLO_TASK;
    riposizionaCards();
}

void MainWindow::on_buttonMultimediali_clicked() {
    filtroCorrente = SOLO_MULTIMEDIALE;
    riposizionaCards();
}

// --- Gestione azioni toolbar
void MainWindow::on_actionSalva_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Salva Progetto", "", "JSON Files (*.json)");

    if (fileName.isEmpty()) return;

    if (!fileName.endsWith(".json", Qt::CaseInsensitive)) {
        fileName += ".json";
    }

    QJsonArray arrayNote;
    for (nota* n : listaNote) {
        arrayNote.append(n->toJson());
    }

    QJsonDocument doc(arrayNote);
    QFile file(fileName);

    if (file.open(QIODevice::WriteOnly)) {
        file.write(doc.toJson(QJsonDocument::Indented));
        file.close();
        QMessageBox::information(this, "Salvataggio", "Dati salvati correttamente!");
    } else {
        QMessageBox::critical(this, "Errore", "Impossibile scrivere il file.");
    }
}

void MainWindow::on_actionCarica_triggered() {
    QString fileName = QFileDialog::getOpenFileName(this, "Importa Note", "", "JSON Files (*.json)");

    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::critical(this, "Errore", "Impossibile aprire il file in lettura.");
        return;
    }
    qDeleteAll(listaNote);
    listaNote.clear();
    QByteArray data = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonArray arrayNote = doc.array();

    for (const QJsonValue &value : arrayNote) {
        QJsonObject obj = value.toObject();
        QString tipo = obj["tipo"].toString();
        nota* n = nullptr;

        if (tipo == "task") {
            notaTask* t = new notaTask();
            t->completata = obj["completata"].toBool();
            n = t;
        }
        else if (tipo == "multimediale") {
            notaMultimediale* m = new notaMultimediale();
            m->percorsoMedia = obj["percorsoMedia"].toString();
            n = m;
        }
        else if (tipo == "avanzato") {
            notaAvanzato* a = new notaAvanzato();
            a->completata = obj["completata"].toBool();
            a->percorsoMedia = obj["percorsoMedia"].toString();
            QString scadStr = obj["scadenza"].toString();
            if(!scadStr.isEmpty())
                a->setScadenza(QDateTime::fromString(scadStr, Qt::ISODate));
            n = a;
        }
        else if (tipo == "promemoria") {
            promemoria* p = new promemoria();
            p->setScadenza(QDateTime::fromString(obj["scadenza"].toString(), Qt::ISODate));
            n = p;
        }
        else {
            n = new nota();
        }

        // dati comuni
        if (n) {
            n->titolo = obj["titolo"].toString();
            n->testo = obj["testo"].toString();
            n->nomeAssegnatore = obj["nomeAssegnatore"].toString();

            if (obj.contains("dataAssegnazione")) {
                n->dataAssegnazione = QDate::fromString(obj["dataAssegnazione"].toString(), Qt::ISODate);
            } else {
                n->dataAssegnazione = QDate::currentDate();
            }            if(obj.contains("id")) n->id = obj["id"].toVariant().toLongLong();

            QString et = obj["etichetta"].toString();
            if (et.isEmpty()) et = "Generico";

            n->etichetta = et;

            if (!elencoEtichette.contains(et)) {
                elencoEtichette.append(et);
                creaWidgetEtichetta(et);
                ui->comboBox->addItem(et);
            }

            listaNote.append(n);
        }
    }

    riposizionaCards();
    QMessageBox::information(this, "Successo", "Note caricate correttamente!");
}


void MainWindow::on_actionEsci_triggered() {
    QMessageBox::StandardButton risposta;
    risposta = QMessageBox::question(this, "Uscita","Sei sicuro di voler uscire? Le modifiche non salvate andranno perse.",QMessageBox::Yes | QMessageBox::No);

    if (risposta == QMessageBox::Yes) {
        QApplication::quit();
    }
}
