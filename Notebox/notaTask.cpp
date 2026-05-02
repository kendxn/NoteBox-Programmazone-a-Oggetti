#include "notaTask.h"

QJsonObject notaTask::toJson() const  {
    QJsonObject obj = nota::toJson();
    obj["tipo"] = "task";
    obj["completata"] = completata;
    return obj;
}

NoteVisualConfig notaTask::getConfig() const {
    NoteVisualConfig c;
    c.mostraTask = true;
    return c;
}
