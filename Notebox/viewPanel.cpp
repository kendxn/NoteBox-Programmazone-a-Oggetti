#include "viewPanel.h"
#include "ui_viewPanel.h"


viewPanel::viewPanel(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::viewPanel)
{
    ui->setupUi(this);
}

void viewPanel::caricaDati(nota *data) {

    if (!data) return;
    ui->labelId_5->setText(QString::number(data->id));
    ui->labelAssegnatore_5->setText(data->nomeAssegnatore);
    ui->labelEtichetta_5->setText(data->etichetta);
    ui->labelTitolo_5->setText(data->titolo);
    ui->labelTesto_5->setText(data->testo);

    if (promemoria* p = dynamic_cast<promemoria*>(data)) {
        ui->frameScadenza->show();
        QDateTime dt = p->getScadenza();

        if (dt.isValid() && !dt.isNull()) {
            ui->labelScadenza_5->setText(dt.toString("dd/MM/yyyy HH:mm"));
        } else {
            ui->labelScadenza_5->setText("Nessuna scadenza impostata");
        }
    } else {
        ui->frameScadenza->hide();
    }

    if (notaMultimediale* nm = dynamic_cast<notaMultimediale*>(data)) {
        if (!nm->percorsoMedia.isEmpty()) {
            QPixmap pix(nm->percorsoMedia);
            if (!pix.isNull()) {
                ui->labelImmagine->show();
                ui->labelImmagine->setPixmap(pix.scaled(600, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation));
            } else {
                ui->frameImmagine->hide();
            }
        } else {
            ui->frameImmagine->hide();
        }
    } else {
        ui->frameImmagine->hide();
    }

    if (notaTask* t = dynamic_cast<notaTask*>(data)) {
        QString stato = t->completata ? "[COMPLETATO] " : "[IN CORSO] ";
        ui->labelTitolo_5->setText(stato + data->titolo);
    }
}
viewPanel::~viewPanel(){
    delete ui;
}

void viewPanel::on_buttonClose_clicked(){
    this->hide();
    this->deleteLater();
}

