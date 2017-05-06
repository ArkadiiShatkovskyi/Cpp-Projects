#ifndef GRA_H
#define	GRA_H
#include "Goniec.h"
#include "Hetman.h"
#include "Krol.h"
#include "Pion.h"
#include "Skoczek.h"
#include "Wieza.h"
#include <string>

class Gra : private Goniec,private Hetman,private Krol,private Pion,private Skoczek,private Wieza
{
    public: 
        Gra();
        void idz(std::string figura,int poz1,int poz2);
        void podaj_mozliwe_ruchy(std::string figura);
        void podaj_pozycje(std::string figura);
        std::string toString(); 
    private:
        char szachownica[8][8];
};
#endif	/* GRA_H */

