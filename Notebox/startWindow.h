#ifndef STARTWINDOW_H
#define STARTWINDOW_H

#include <QWidget>

namespace Ui { class startWindow; }

class startWindow : public QWidget {
    Q_OBJECT

public:
    explicit startWindow(QWidget *parent = nullptr);
    ~startWindow();

signals: // I segnali vanno dichiarati qui, nel file header
    void iniziaPremuto();
    void importaPremuto();

private slots:
    void on_buttonInizia_clicked();
    void on_buttonImporta_clicked();

private:
    Ui::startWindow *ui;
};

#endif
