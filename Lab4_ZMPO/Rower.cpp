#include "Rower.h"
#include <string>

Rower::Rower(std::string kierowca, int predkosc):Pojazd(kierowca,predkosc,"Rower"){}

std::string Rower::getKierowca(){
    return Pojazd::getKierowca();
}

int Rower::getPredkosc(){
    return Pojazd::getPredkosc();
}


