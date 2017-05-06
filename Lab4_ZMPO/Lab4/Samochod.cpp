#include "Samochod.h"
#include <string>

Samochod::Samochod(std::string kierowca, int predkosc,std::string rejestracja):Pojazd(kierowca,predkosc,rejestracja){}

std::string Samochod::getKierowca(){
    return Pojazd::getKierowca();
}

int Samochod::getPredkosc(){
    return Pojazd::getPredkosc();
}

std::string Samochod::get_rejestracja(){
    return Pojazd::getRejestracja();
}