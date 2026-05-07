#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "nota.h"
#include "cardWidget.h"
#include <QVector>
#include <QMessageBox>
#include <QFileDialog>
#include <promemoria.h>
#include <QJsonArray>
#include <QJsonDocument>
#include <QFile>
#include <QFileDialog>
#include <QInputDialog>
#include <QShortcut>
#include <QKeySequence>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}

QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    void addCard(nota *data);
    void on_actionCarica_triggered();
    ~MainWindow();

protected:

    void resizeEvent(QResizeEvent *event) override;
    bool eventFilter(QObject *obj, QEvent *event) override;

private slots:

    void iniziaProgramma();
    void apriOverlayRicerca();

    void on_buttonImmagine_clicked();
    void on_buttonClose_clicked();
    void on_buttonSalva_clicked();
    void on_buttonSetScadenza_clicked();
    void on_buttonEtichetteAdd_clicked();
    void on_pushButton_5_clicked();
    void on_buttonNote_clicked();
    void on_buttonPromemoria_clicked();
    void on_buttonMultimediali_clicked();
    void on_buttonTask_clicked();
    void on_actionSalva_triggered();
    void on_actionEsci_triggered();

private:

    Ui::MainWindow *ui;
    enum VistaAttuale { TUTTE, SOLO_PROMEMORIA, SOLO_TASK, SOLO_MULTIMEDIALE };
    VistaAttuale filtroCorrente = TUTTE;
    QString etichettaCorrente = "";

    QVector<nota*> listaNote;
    QVector<nota*> listaWidget;
    QStringList elencoEtichette;

    void riposizionaCards();
    void rimuoviCard(cardWidget* widget);
    int calcolaColonne();
    void mostraDettaglioNota(nota* n);
    void filtraPerEtichetta(const QString &tag);
    void creaWidgetEtichetta(const QString &nome);
    void salvaDati();
    void caricaDati();
    void aggiornaMenuEtichette();
    void apriEditor(nota *data);

};
#endif
