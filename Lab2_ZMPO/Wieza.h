#ifndef WIEZA_H
#define	WIEZA_H
#include <string>
#include "Figura.h"

class Wieza : public Figura
{
public:
    Wieza(int a,int b);
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

#endif	/* WIEZA_H */

