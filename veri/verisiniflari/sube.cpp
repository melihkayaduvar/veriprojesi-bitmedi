#include "sube.h"

Sube::Sube():IdliSınıf{},_sinif{9},_sube{'A'},_lise_id{0} {}

Sube::Sube(const Sube& kaynak):IdliSınıf{kaynak},
    _sinif{kaynak._sinif},
    _sube{kaynak._sube},
    _lise_id{kaynak._lise_id} {}

char Sube::sube() const{return _sube;}

void Sube::setSube(char newsube){_sube=newsube;}

quint8 Sube::sinif() const{return _sinif;}

void Sube::setSinif(quint8 newsinif){_sinif=newsinif;}

quint32 Sube::liseId() const{return _lise_id;}

void Sube::setLiseId(quint32 newliseid){_lise_id=newliseid;}
