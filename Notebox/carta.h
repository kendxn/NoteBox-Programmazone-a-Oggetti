#ifndef CARTA_H
#define CARTA_H

#include <QWidget>

namespace Ui {
class carta;
}

class carta : public QWidget
{
    Q_OBJECT

public:
    explicit carta(QWidget *parent = nullptr);
    ~carta();

private:
    Ui::carta *ui;
};

#endif // CARTA_H
