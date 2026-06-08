#ifndef NOTAAVANZATO_H
#define NOTAAVANZATO_H

#include "notaMultimediale.h"
#include "notaTask.h"
#include "promemoria.h"


class notaAvanzato : public notaMultimediale, public notaTask, public promemoria
{
public:

    notaAvanzato() : nota(), notaMultimediale(), notaTask(), promemoria() {}
    QJsonObject toJson() const override;
    NoteVisualConfig getConfig() const override;

};

#endif
