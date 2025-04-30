#include "veritabani.h"

VeriTabani::VeriTabani() {}

VeriTabani &VeriTabani::taKendisi()
{
    static VeriTabani nesne;// ADIM 3. STATİK BİR NESNE OLUŞTURULUR
    return nesne;           //          VE DÖDÜRÜLÜR.
}

LiseTablosu &VeriTabani::liseler(){return tblLise;}

SubeTablosu &VeriTabani::subeler(){return tblSube;}

void VeriTabani::kaydet()
{

}

void VeriTabani::geriYukle()
{

}
