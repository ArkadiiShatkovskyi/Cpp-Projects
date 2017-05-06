#ifndef DROGA_H
#define	DROGA_H
#include <string>
#include "Odcinek.h"
#include "Samochod.h"
#include "Rower.h"
#include "Pojazd.h"

class Droga{
public:
    Droga(Odcinek* od);
    Odcinek* getOdcinek();
    friend std::string operator+(Droga droga,Pojazd pojazd);
private:
    Odcinek* odcinek;
};

#endif	/* DROGA_H */

