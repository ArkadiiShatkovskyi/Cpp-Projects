#include "Pojazd.h"
#include <string>

Pojazd::Pojazd(std::string kierowca, int predkosc,std::string rejestracja){
    this->kierowca=kierowca;
    this->predkosc=predkosc;
    this->rejestracja=rejestracja;
}

std::string Pojazd::getKierowca(){
    return kierowca;
}

int Pojazd::getPredkosc(){
    return predkosc;
}

std::string Pojazd:: getRejestracja(){
    return rejestracja;
}