#include "Droga.h"
#include <string>
#include <sstream>

Droga::Droga(Odcinek* od){
    this->odcinek=od;
}

Odcinek* Droga::getOdcinek(){
    return this->odcinek;
}

std::string operator+(Droga droga,Pojazd pojazd){
    Odcinek* odcinki =droga.getOdcinek();
    std::string wynik="";
    for(int i=0;i<3;i++){
        if(pojazd.getPredkosc()>odcinki[i].getOgraniczenie()){
             std::stringstream ss;
             ss << odcinki[i].getOgraniczenie();
             std::string s = ss.str();
           wynik+="Ograniczenie szybkosci: "+s+"!\n[ mandat, rejestracja: "+pojazd.getRejestracja()+"] \n";
        }
        else if(pojazd.getRejestracja()=="Rower" && !odcinki[i].dop_rower()){
           wynik+="Zakaz wjazdu dla rowerow!\n[ mandat, rejestracja: "+pojazd.getRejestracja()+"] \n";
        }
        else if(!odcinki[i].dop_sam()){
           wynik+="Zakaz wjazdu dla samochodow!\n[ mandat, rejestracja: "+pojazd.getRejestracja()+"]\n";
        }
    }
    if(wynik==""){
        wynik="Wszyskto OK!";
    }
    return wynik;
}