#ifndef SEARCHWINDOW_H
#define SEARCHWINDOW_H

#include <QWidget>
#include "nota.h"

namespace Ui {
class searchWindow;
}

class searchWindow : public QWidget
{
    Q_OBJECT

public:

    explicit searchWindow(QWidget *parent = nullptr);
    void setDatiRicerca(const QList<nota *> &dati);
    ~searchWindow();

private slots:

    void on_buttonAnnullaRicerca_clicked();
    void on_lineSearch_textChanged(const QString &arg1);
    void keyPressEvent(QKeyEvent *event);
    void on_buttonCancella_clicked();

private:

    Ui::searchWindow *ui;
    QVector<nota*> elencoDati;
    void pulisciRisultati();

};

#endif
