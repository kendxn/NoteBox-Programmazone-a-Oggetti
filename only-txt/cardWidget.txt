#include "nota.h"
#include "ui_cardWidget.h"
#include "cardWidget.h"
#include "promemoria.h"
#include "notaMultimediale.h"
#include "notaTask.h"

cardWidget::cardWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::cardWidget)
{
    ui->setupUi(this);
    this->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
    ui->buttonCambiaStato->hide();
}

cardWidget::~cardWidget()
{
    delete ui;
}

// configurazione grafico basato su polimorfismo
void cardWidget::setData(nota *info) {
    if (!info) return;
    this->currentData = info;

    NoteVisualConfig config = info->getConfig();

    // dati comuni sempre visibili
    ui->labelTitolo->setText(info->titolo);
    ui->labelNome->setText(info->nomeAssegnatore);
    ui->labelData->setText(info->dataAssegnazione.toString("dd/MM/yyyy"));
    ui->labelTesto->setText(info->testo);

    // reset stili
    ui->labelTitolo->setStyleSheet("");
    ui->labelTesto->setStyleSheet("");

    // switching di elementi visibili e non
    ui->frameScadenza->setVisible(config.mostraScadenza);
    ui->labelImmagine->setVisible(config.mostraImmagine);
    ui->labelStatus->setVisible(config.mostraTask);
    ui->buttonCambiaStato->setVisible(config.mostraTask);

    // gestione scadenza esterno: mostrato solo quando è valido
    if (config.mostraScadenza) {
        if (promemoria* p = dynamic_cast<promemoria*>(info)) {
            QDateTime scadenza = p->getScadenza();

            if (scadenza.isValid() && !scadenza.isNull()) {
                ui->frameScadenza->show();
                ui->labelScadenza->setText("Scade il: " + scadenza.toString("dd/MM/yyyy"));

                QDate oggi = QDate::currentDate();
                qint64 giorni = oggi.daysTo(scadenza.date());

                if (giorni > 0)
                    ui->labelGiorni->setText("Giorni mancanti: " + QString::number(giorni));
                else if (giorni == 0)
                    ui->labelGiorni->setText("Scade oggi!");
                else
                    ui->labelGiorni->setText("Scaduta");
            } else {
                ui->frameScadenza->hide();
            }
        }
    }

    // gestione immagini
    if (config.mostraImmagine) {
        if (notaMultimediale* nm = dynamic_cast<notaMultimediale*>(info)) {
            QPixmap pix(nm->percorsoMedia);

            if (pix.isNull()) {
                ui->labelImmagine->setText("Errore nel caricamento immagine");
            } else {
                ui->labelImmagine->setText(nm->percorsoMedia);
                ui->labelImmagine->setPixmap(pix.scaled(
                    ui->labelImmagine->width(),
                    ui->labelImmagine->height(),
                    Qt::KeepAspectRatio,
                    Qt::SmoothTransformation
                    ));
            }
        }
    }

    // gestione task
    if (config.mostraTask) {
        if (notaTask* t = dynamic_cast<notaTask*>(info)) {
            ui->labelStatus->setText(t->completata ? "Stato: Completato" : "Stato: In corso");
        }
    }
}


// nascondi bottoni action per viewing mode
void cardWidget::setReadOnly(bool readOnly) {

    if (readOnly) {
        ui->frameButtons->hide();
        ui->buttonCambiaStato->hide();
    } else {
        ui->frameButtons->show();
        ui->buttonCambiaStato->show();
    }
}

// --- gestione azioni delle pulsanti ---
void cardWidget::on_buttonElimina_clicked()
{
    QMessageBox::StandardButton risposta;
    risposta = QMessageBox::question(this, "Conferma eliminazione","Sei sicuro di voler eliminare questa nota?",QMessageBox::Yes | QMessageBox::No);

    if (risposta == QMessageBox::Yes) {
        emit deleteRequested(this);
    }
}

void cardWidget::on_buttonModifica_clicked() {
    emit editRequested(this->currentData);
}

void cardWidget::on_buttonCambiaStato_clicked()
{
    if (notaTask* t = dynamic_cast<notaTask*>(currentData)) {

        t->completata = !t->completata;
        ui->labelStatus->setText(t->completata ? "Stato: Completato" : "Stato: In corso");

        if (t->completata) {
            ui->labelTitolo->setStyleSheet("text-decoration: line-through; color: gray;");
            ui->labelTesto->setStyleSheet("text-decoration: line-through; color: gray;");
            ui->buttonCambiaStato->setText("Riapri");

        } else {
            ui->labelTitolo->setStyleSheet("");
            ui->labelTesto->setStyleSheet("");
            ui->buttonCambiaStato->setText("Completa");
        }
    }
}

void cardWidget::on_buttonVisualizza_clicked()
{
    if (currentData) {
        emit viewRequested(this->currentData);
    }
}

