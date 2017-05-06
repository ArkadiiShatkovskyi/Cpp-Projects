#include <string>
#ifndef FIGURA_H
#define	FIGURA_H


class Figura {
public:
    Figura(std::string name,int a,int b);
    int* zwroc_nom_poz();
    std::string zwroc_nazwe();
    std::string toString();
    std::string convertInt(int number);
private:
    std::string name;
    int* nom_poz;    //nominalna pozycja
};


#endif	/* FIGURA_H */

