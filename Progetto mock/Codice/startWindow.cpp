#include "startWindow.h"
#include "ui_startWindow.h"

startWindow::startWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::startWindow)
{
    ui->setupUi(this);
    // Rimosso 'signals' da qui, non è ammesso nel corpo di una funzione
}

startWindow::~startWindow() {
    delete ui;
}

void startWindow::on_buttonInizia_clicked() {
    emit iniziaPremuto();
    this->close(); // Chiude la finestra di start
}

void startWindow::on_buttonImporta_clicked() {
    emit importaPremuto();
    this->close(); // Chiude la finestra di start
}
