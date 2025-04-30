#pragma once

#include <QString>

#include "idlisinif.h"

class Sube:public IdliSınıf {
private:
    Sube();
    Sube(const Sube& kaynak);
    template <class T> friend class Tablo;
public:
    char sube() const;
    void setSube(char newsube);

    quint8 sinif() const;
    void setSinif(quint8 newsinif);

    quint32 liseId() const;
    void setLiseId(quint32 newliseid);
private:
    quint8 _sinif;
    char _sube;
    quint32 _lise_id;
};
