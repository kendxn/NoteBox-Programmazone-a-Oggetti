#ifndef NOTA_H
#define NOTA_H

#include <QString>
#include <QDate>
#include <QDateTime>
#include <QJsonObject>

struct NoteVisualConfig {
    bool mostraScadenza = false;
    bool mostraImmagine = false;
    bool mostraTask = false;
};

class nota {
public:
    int id;
    QString titolo;
    QString nomeAssegnatore;
    QDate dataAssegnazione;
    QString testo;
    QString etichetta;

    virtual NoteVisualConfig getConfig() const {
        return NoteVisualConfig();
    }

    virtual QJsonObject toJson() const {
        QJsonObject obj;
        obj["tipo"] = "base";
        obj["titolo"] = titolo;
        obj["testo"] = testo;
        obj["etichetta"] = etichetta;
        obj["nomeAssegnatore"] = nomeAssegnatore;
        return obj;
    }

    nota() {
        id = QDateTime::currentMSecsSinceEpoch();
        dataAssegnazione = QDate::currentDate();
    }

    virtual ~nota() {}

};

#endif
