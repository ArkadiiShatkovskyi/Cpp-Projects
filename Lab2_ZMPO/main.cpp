#include <cstdlib>
#include <iostream>
#include "Goniec.h"
#include "Hetman.h"
#include "Krol.h"
#include "Pion.h"
#include "Skoczek.h"
#include "Wieza.h"
#include "NewF.h"

using namespace std;

int main(int argc, char** argv) {
    
    NewF *f=new NewF(4,3);
    cout<<f->toString()<<endl;
    f->podaj_dozwolone_ruchy();
    f->dodaj_Przec(3,4,1);
    f->dodaj_Przec(1,4,2);
    f->podaj_dozwolone_ruchy();
    f->idz(2,5);
    cout<<f->toString()<<endl;
    return 0;
}

