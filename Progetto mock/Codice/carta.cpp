#include "carta.h"
#include "ui_carta.h"

carta::carta(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::carta)
{
    ui->setupUi(this);
}

carta::~carta()
{
    delete ui;
}
