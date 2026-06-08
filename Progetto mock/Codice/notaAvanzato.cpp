#include "notaAvanzato.h"

QJsonObject notaAvanzato::toJson() const {
    QJsonObject obj = nota::toJson();
    obj["tipo"] = "avanzato";
    obj["completata"] = completata;
    obj["nomeAssegnatore"] = nomeAssegnatore;
    obj["dataAssegnazione"] = dataAssegnazione.toString(Qt::ISODate);
    obj["percorsoMedia"] = percorsoMedia;

    if (getScadenza().isValid()) {
        obj["scadenza"] = getScadenza().toString(Qt::ISODate);
    } else {
        obj["scadenza"] = "";
    }
    return obj;
}

NoteVisualConfig notaAvanzato::getConfig() const  {
    NoteVisualConfig c;
    c.mostraScadenza = true;
    c.mostraImmagine = true;
    c.mostraTask = true;
    return c;
}
