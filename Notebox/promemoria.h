#ifndef PROMEMORIA_H
#define PROMEMORIA_H

#include "nota.h"


class promemoria : virtual public nota {

private:
    QDateTime scadenza;

public:

    bool isScaduta() const;
    QDateTime getScadenza() const;
    void setScadenza(const QDateTime &time);
    NoteVisualConfig getConfig() const override;

};



#endif
