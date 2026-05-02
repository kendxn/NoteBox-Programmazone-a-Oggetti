#include <QDateTime>
#include <nota.h>
#include <promemoria.h>

bool promemoria::isScaduta() const {
        return QDateTime::currentDateTime() > scadenza;
    }

NoteVisualConfig promemoria::getConfig() const  {
    NoteVisualConfig c;
    c.mostraScadenza = true;
    return c;
}

QDateTime promemoria::getScadenza() const {
    return scadenza;
}

void  promemoria::setScadenza(const QDateTime &time){
    scadenza=time;
}

