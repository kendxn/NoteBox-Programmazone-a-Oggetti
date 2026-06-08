#include "searchWindow.h"
#include "ui_searchWindow.h"
#include "nota.h"
#include "cardWidget.h"
#include <QKeyEvent>

searchWindow::searchWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::searchWindow)
{
    ui->setupUi(this);

}

searchWindow::~searchWindow() {
    delete ui;
}

void searchWindow::on_buttonAnnullaRicerca_clicked() {
    on_buttonCancella_clicked();
    this->close();
    this->deleteLater();
}

void searchWindow::setDatiRicerca(const QVector<nota *> &dati) {
    this->elencoDati = dati;
}

void searchWindow::keyPressEvent(QKeyEvent *event) {
    if (event->key()== Qt::Key_Escape) {
        on_buttonAnnullaRicerca_clicked();
    }
}

void searchWindow::pulisciRisultati() {
    QLayoutItem *item;
    while ((item= ui->gridLayout->takeAt(0)) != nullptr) {
        if (item->widget()) {
            item->widget()->deleteLater();
        }
        delete item;
    }
}

void searchWindow::on_lineSearch_textChanged(const QString &testo){
    this->pulisciRisultati();

    if (testo.isEmpty()) return;

    int colonnaCorrente= 0;
    int rigaCorrente= 0;
    int maxColonne= 3;

    for (nota *card : elencoDati) {
        if (!card) continue;

        if (card->titolo.contains(testo, Qt::CaseInsensitive) || card->testo.contains(testo, Qt::CaseInsensitive)) {

            cardWidget *risultato = new cardWidget(this);
            risultato->setData(card);
            risultato->setReadOnly(true);
            ui->gridLayout->addWidget(risultato, rigaCorrente, colonnaCorrente);

            colonnaCorrente++;
            if (colonnaCorrente >= maxColonne) {
                colonnaCorrente = 0;
                rigaCorrente++;
            }
        }
    }
}

void searchWindow::on_buttonCancella_clicked() {
    ui->lineSearch->clear();
}
