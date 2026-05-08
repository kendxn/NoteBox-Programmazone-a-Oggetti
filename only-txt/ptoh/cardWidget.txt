#ifndef CARDWIDGET_H
#define CARDWIDGET_H

#include <QWidget>
#include <QString>
#include <QDate>
#include <nota.h>
#include <QString>
#include <QDate>
#include <QMessageBox>

namespace Ui {
class cardWidget;
}


class cardWidget : public QWidget
{
    Q_OBJECT

public:
    explicit cardWidget(QWidget *parent = nullptr);
    void setData(nota *data);
    nota* getCurrentData() const { return currentData; }
    void setReadOnly(bool readOnly);
    ~cardWidget();

signals:
    void deleteRequested(cardWidget* card);
    void editRequested(nota* data);
    void viewRequested(nota* data);

private slots:
    void on_buttonElimina_clicked();
    void on_buttonModifica_clicked();
    void on_buttonVisualizza_clicked();
    void on_buttonCambiaStato_clicked();


private:
    Ui::cardWidget *ui;
    nota *currentData = nullptr;
};

#endif
