#pragma once

#include <memory>
#include <QVector>
#include <functional>

#include "../araclar/hatalar.h"

template <class T>
class Tablo{
public:
    using VeriSinifi = T;
    using VeriPointer = std::shared_ptr<VeriSinifi>;
    using VeriDizisi = QVector<VeriPointer>;
    using SorguFonksiyonu = std::function<bool(VeriPointer)>;

    Tablo(){}
    VeriPointer olustur(){
        return std::make_shared<VeriSinifi>();
    }
    void ekle(VeriPointer yeni_nesne){
        yeni_nesne->setId(_sonId++);
        this->_elemanlar.append(yeni_nesne);
    }
    VeriPointer idYeGoreBul(quint32 id){
        if(_elemanlar.size()<100){
            //Sıralı Arama
            for(auto eleman:_elemanlar){
                if(id==eleman->getId()){
                    return eleman;
                }
            }
        }else{
            //İkili Arama
            quint32 baslangic=0;
            quint32 bitis=_elemanlar.size();
            quint32 orta;
            while(baslangic<bitis){
                orta = (baslangic+bitis)/2;
                if(id==_elemanlar[orta]->getId()){
                    return _elemanlar[orta];
                }
                if(id>_elemanlar[orta]->getId()){
                    baslangic=orta;
                    continue;}
                if(id<_elemanlar[orta]->getId()){
                    bitis=orta;
                    continue;}
            }
        }
        throw OzelHata("Bulunamadı.");
    }
    bool idYeGoreSil(quint32 id){
        //auto silinenElemanSayisi= _elemanlar.removeIf(
        //    [id]
        //    (std::shared_ptr<Lise> a)
        //    {return a->getId()==id;});
        //return silinenElemanSayisi>0;
        //Bu satırın üstündeki kod ile altındaki kod ile aynı işlemi yerine getiriyor
        for(quint32 i=0;i<_elemanlar.size();i++){
            if(_elemanlar[i]->getId()==id){
                _elemanlar.removeAt(i);
                return true;
            }
        }
        return false;
    }
    VeriDizisi arama(SorguFonksiyonu sorgu){
        VeriDizisi aramaSonucu;
        for (auto &lise:_elemanlar){
            if(sorgu(lise)){
                aramaSonucu.append(lise);
            }
        }
        return aramaSonucu;
    }
private:
    VeriDizisi _elemanlar;
    quint32 _sonId;

    friend class VeriTabani;
};
