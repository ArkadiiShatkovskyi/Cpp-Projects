#include <string>
#include "Figura.h"
#ifndef SKOCZEK_H
#define	SKOCZEK_H

class Skoczek: public Figura 
{
public:
    Skoczek(int a,int b);
    void podaj_dozwolone_ruchy();
    bool idz(int a,int b);
    int* zwroc_akt_poz();
    void set_akt_poz(int a,int b);
    std::string toString();
private:
    bool czy_idz(int p,int d);    
    bool sprawdz(int p,int d);
    int akt_poz[2]; //aktualna pozycja
};
#endif	/* SKOCZEK_H */

