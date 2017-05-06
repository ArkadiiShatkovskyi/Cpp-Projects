#ifndef GONIEC_H
#define	GONIEC_H
#include "Figura.h"
#include <string>

class Goniec : public Figura
{
    public:
    Goniec(int a,int b);
    void podaj_dozwolone_ruchy();
    bool idz(int a,int b);
    int* zwroc_akt_poz();
    void set_akt_poz(int a,int b);
    std::string toString();
private:    
    bool sprawdz(int p,int d);
    bool czy_idz(int p,int d);
    int akt_poz[2];
};

#endif	/* GONIEC_H */

