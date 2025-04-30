#pragma once

#include <QString>

#include "idlisinif.h"

class Lise:public IdliSınıf {
private:
    Lise();

    Lise(const Lise& kaynak);

    template <class T> friend class Tablo;
public:
    QString adi() const;
    void setAdi(const QString& newadi);
private:
    QString _adi;
};
