#ifndef NOTAMULTIMEDIALE_H
#define NOTAMULTIMEDIALE_H
#include "nota.h"

class notaMultimediale: virtual public nota {
public:
    QString percorsoMedia;

    QJsonObject toJson() const override;
    notaMultimediale(): nota(){}
    NoteVisualConfig getConfig() const override;
};

#endif
