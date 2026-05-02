#include "editCard.h"
#include "ui_editCard.h"
#include <QFileDialog>
#include <QMessageBox>
#include "notaMultimediale.h"
#include "notaAvanzato.h"

// Includi le sottoclassi per il dynamic_cast
#include "promemoria.h"

editCard::editCard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editCard)
{
    ui->setupUi(this);

    ui->frameScadenzaEdit->hide();
    ui->frameScadenzaButton->show();

}

editCard::~editCard() {
    delete ui;
}

void editCard::caricaDati(nota *data) {
    if (!data) return;
    this->notaInModifica = data;

    // dati comuni
    ui->lineTitolo->setText(data->titolo);
    ui->boxTesto->setPlainText(data->testo);
    ui->lineAssegnatore->setText(data->nomeAssegnatore);

    // reset visibilità
    ui->frameScadenzaEdit->hide();
    ui->frameImmagine->hide();
    ui->frameScadenzaButton->hide();

    // promemoria
    if (promemoria* p = dynamic_cast<promemoria*>(data)) {
        ui->frameScadenzaEdit->show();
        ui->frameScadenzaButton->hide();
        ui->dateEdit->setDateTime(p->getScadenza());
    }

    // immagine
    if (notaMultimediale* nm = dynamic_cast<notaMultimediale*>(data)) {
        ui->frameImmagine->show();
        ui->frameScadenzaButton->hide();
        ui->frameScadenzaEdit->hide();
        ui->labelImmagine->setText(nm->percorsoMedia);
    }

    // task
    if (notaTask* t = dynamic_cast<notaTask*>(data)) {
        ui->frameImmagine->hide();
        ui->frameScadenzaButton->hide();
        ui->frameScadenzaEdit->hide();
    }
}

// --- gestione dei bottoni ---
void editCard::on_buttonSalva_clicked() {

    if (!notaInModifica) return;

    if (ui->lineTitolo->text().isEmpty() && ui->boxTesto->toPlainText().isEmpty()) {
        QMessageBox::warning(this, "Nota Vuota", "Inserisci almeno un titolo o un testo!");
        return;
    }

    notaInModifica->titolo = ui->lineTitolo->text();
    notaInModifica->testo = ui->boxTesto->toPlainText();
    notaInModifica->etichetta = ui->comboBox->currentText();
    notaInModifica->nomeAssegnatore = ui->lineAssegnatore->text();


    if (promemoria* p = dynamic_cast<promemoria*>(notaInModifica)) {
        if (ui->frameScadenzaEdit->isVisible()) {
            p->setScadenza(ui->dateEdit->dateTime());
        }
    }

    if (notaMultimediale* nm = dynamic_cast<notaMultimediale*>(notaInModifica)) {
        nm->percorsoMedia = ui->labelImmagine->text();
    }

    emit salvataggioCompletato();

    this->close();
    this->deleteLater();
}


void editCard::on_buttonImmagine_clicked() {
    QString filePath = QFileDialog::getOpenFileName(
        this, tr("Seleziona Immagine"), QDir::homePath(),
        tr("Immagini (*.png *.jpg *.jpeg *.bmp)")
        );

    if (!filePath.isEmpty()) {
        ui->labelImmagine->setText(filePath);
    }
}

void editCard::on_buttonSetScadenza_clicked()
{
    ui->frameScadenzaButton->hide();
    ui->frameScadenzaEdit->show();
}

void editCard::setEtichetteDisponibili(const QStringList &lista) {
    ui->comboBox->clear();
    ui->comboBox->addItems(lista);
}

void editCard::on_buttonAnnulla_clicked()
{
    this->close();
    this->deleteLater();
}

