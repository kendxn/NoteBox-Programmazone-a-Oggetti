#ifndef VIEWPANEL_H
#define VIEWPANEL_H

#include <QWidget>
#include "nota.h"
#include "notaTask.h"
#include "promemoria.h"
#include "notaMultimediale.h"

namespace Ui {
class viewPanel;
}

class viewPanel : public QWidget
{
    Q_OBJECT

public:

    explicit viewPanel(QWidget *parent = nullptr);
    void caricaDati(nota* data);
    ~viewPanel();

private slots:

    void on_buttonClose_clicked();

private:
    Ui::viewPanel *ui;

};

#endif
