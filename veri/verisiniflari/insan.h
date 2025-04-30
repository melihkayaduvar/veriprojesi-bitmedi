#pragma once

#include <QDateTime>
#include <QString>

#include "idlisinif.h"

class Insan:public IdliSınıf{
private:
    Insan();
    Insan(const Insan &kaynak);
    template <class T> friend class Tablo;
public:
    QString tckimlik() const;
    void settckimlik(const QString &newtckimlik);
    QString isim() const;
    void setisim(const QString &newisim);
    QString soyisim() const;
    void setsoyisim(const QString &newsoyisim);
    QDate dogum_tarihi() const;
    void setdogum_tarihi(const QDate &newdogum_tarihi);
    int yas() const;

private:
    QString _tckimlik;
    QString _isim;
    QString _soyisim;
    QDate _dogum_tarihi;
};
