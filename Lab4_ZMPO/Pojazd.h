#include <string>
#ifndef POJAZD_H
#define	POJAZD_H

class Pojazd{
private:
    std::string kierowca;
    int predkosc;
    std::string rejestracja;
public:
    Pojazd(std::string kierowca,int predkosc,std::string rejestracja);
    std::string getKierowca();
    int getPredkosc();
    std::string getRejestracja();
};

#endif	/* POJAZD_H */

