#include "insan.h"

Insan::Insan() {}

QString Insan::tckimlik() const{return _tckimlik;}

void Insan::settckimlik(const QString &newtckimlik){_tckimlik=newtckimlik;}

QString Insan::isim() const{return _isim;}

void Insan::setisim(const QString &newisim){_isim=newisim;}

QString Insan::soyisim() const{return _soyisim;}

void Insan::setsoyisim(const QString &newsoyisim){_soyisim=newsoyisim;}

QDate Insan::dogum_tarihi() const{return _dogum_tarihi;}

void Insan::setdogum_tarihi(const QDate &newdogum_tarihi){_dogum_tarihi=newdogum_tarihi;}

int Insan::yas() const
{
    QDate bugun = QDate::currentDate();
    int yas = bugun.year() - _dogum_tarihi.year();
    // Eğer doğum günü bu yıl henüz gelmediyse, yaş bir eksik olmalı
    if (bugun.month() < _dogum_tarihi.month() ||
        (bugun.month() == _dogum_tarihi.month() && bugun.day() < _dogum_tarihi.day())) {
        yas--;
    }
    return yas;
}
