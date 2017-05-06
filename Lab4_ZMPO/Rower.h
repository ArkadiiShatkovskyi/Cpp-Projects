#ifndef ROWER_H
#define	ROWER_H
#include "Pojazd.h"
#include <string>

class Rower: public Pojazd 
{
    public:
        Rower(std::string kierowca, int predkosc);
        std::string getKierowca();
        int getPredkosc();
};
#endif	/* ROWER_H */

