#ifndef KROL_H
#define	KROL_H
#include "Figura.h"
#include <string>

class Krol : public Figura
{
public:    
    Krol(int a,int b);
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
#endif	/* KROL_H */

