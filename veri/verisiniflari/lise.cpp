#include "lise.h"

Lise::Lise():IdliSınıf{},_adi{""} {}
Lise::Lise(const Lise& kaynak):IdliSınıf{kaynak},_adi{kaynak._adi} {}

QString Lise::adi() const{return _adi;}

void Lise::setAdi(const QString &newadi){_adi=newadi;}
