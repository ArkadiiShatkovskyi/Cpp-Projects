
#ifndef SAMOCHOD_H
#define	SAMOCHOD_H
#include "Pojazd.h"

class Samochod : public Pojazd
{
    public:
        Samochod(std::string kierowca, int predkosc,std::string rejestracja);
        std::string getKierowca();
        int getPredkosc(); 
        std::string get_rejestracja();      
};
#endif	/* SAMOCHOD_H */

