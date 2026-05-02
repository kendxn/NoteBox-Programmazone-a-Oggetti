#ifndef NOTATASK_H
#define NOTATASK_H

#include "nota.h"

class notaTask : virtual public  nota {
public:

    bool completata;
    QJsonObject toJson() const override;
    notaTask() : nota(), completata(false) {}
    NoteVisualConfig getConfig() const override;

};

#endif
