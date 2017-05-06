#ifndef NEWF_H
#define	NEWF_H
#include "Figura.h"
#include <string>

class NewF : public Figura
{
public:
    NewF(int a,int b);
    void dodaj_Przec(int a,int b,int jaki);
    void podaj_dozwolone_ruchy();
    bool idz(int a,int b);
    int* zwroc_akt_poz();
    void set_akt_poz(int a,int b);
    std::string toString();
private:   
    bool sprawdz(int p,int d);
    bool czy_idz(int p,int d);
    int akt_poz[2];
    int przeciw[2];
    int przeciw2[2];
};
#endif	/* NEWF_H */

