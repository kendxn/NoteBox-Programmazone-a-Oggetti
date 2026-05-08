#ifndef EDITCARD_H
#define EDITCARD_H

#include "nota.h"
#include <QWidget>


namespace Ui {
class editCard;
}

class editCard : public QWidget
{
    Q_OBJECT

public:

    explicit editCard(QWidget *parent = nullptr);
    void caricaDati(nota *data);
    void setEtichetteDisponibili(const QStringList &lista);
    ~editCard();

signals:
    void salvataggioCompletato();

private slots:
    void on_buttonSalva_clicked();
    void on_buttonAnnulla_clicked();
    void on_buttonImmagine_clicked();
    void on_buttonSetScadenza_clicked();

private:
    Ui::editCard *ui;
    int idCorrente;
    nota *notaInModifica = nullptr;
};

#endif
