#pragma once

#include "tablo_tanimlari.h"
//TEKİL TASARIM ŞABLONU UYGULAMASI
class VeriTabani
{
    //ADIM 1. İLKLENDİRİCİ PRİVATE OLACAK.
private:
    VeriTabani();
    //ADIM 2. PUBLİC STATİC BİR FONKSİYON EKLENİR
public:
    static VeriTabani &taKendisi(); //ADIM 3 .CCP'DE

    LiseTablosu &liseler();
    SubeTablosu &subeler();

    void kaydet();
    void geriYukle();

private:
    LiseTablosu tblLise;
    SubeTablosu tblSube;
};
