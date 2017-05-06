#ifndef HETMAN_H
#define	HETMAN_H
#include <string>
#include "Figura.h"

class Hetman : public Figura
{
public:
    Hetman(int a,int b);
    Hetman(std::string name,int a,int b);
    void podaj_dozwolone_ruchy();
    bool idz(int a,int b);
    int* zwroc_akt_poz();
    void set_akt_poz(int a,int b);
    std::string toString();
private:    
    bool czy_idz(int p,int d);
    bool sprawdz(int p,int d);
    int akt_poz[2];
};
#endif	/* HETMAN_H */

