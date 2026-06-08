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

QJsonObject promemoria::toJson() const {
    QJsonObject obj = nota::toJson();
    obj["tipo"] = "promemoria";
    obj["scadenza"] = getScadenza().toString(Qt::ISODate);
    return obj;
}
