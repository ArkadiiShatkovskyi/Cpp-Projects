#ifndef PION_H
#define	PION_H
#include "Figura.h"
#include <string>

class Pion : public Figura
{
public:
    Pion(int a,int b);
    void podaj_dozwolone_ruchy();
    bool idz(int a,int b);
    int* zwroc_akt_poz();
    void set_akt_poz(int a,int b);
    std::string toString();
private:
    void podaj_dozwolone_ruchy_h();    
    bool sprawdz(int p,int d);
    bool czy_idz(int p,int d);
    bool czy_idz_h(int p,int d);
    int akt_poz[2];
    bool czy_het;   //czy jest hetmanem
};
#endif	/* PION_H */

