#include "notaMultimediale.h"

NoteVisualConfig notaMultimediale::getConfig() const {
    NoteVisualConfig c;
    c.mostraImmagine = true;
    return c;
}

QJsonObject notaMultimediale::toJson() const {
    QJsonObject obj = nota::toJson();
    obj["tipo"] = "multimediale";
    obj["percorsoMedia"] = percorsoMedia;
    return obj;
}
