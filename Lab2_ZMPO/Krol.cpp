#include "Krol.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

Krol::Krol(int a,int b):Figura("Krol",a,b){
        this->akt_poz[0]=a;
        this->akt_poz[1]=b;
}

void Krol::podaj_dozwolone_ruchy(){
    int* poz=zwroc_akt_poz();
    std::string s;
    int i,j;
        if(sprawdz(i=0,j=1))
            s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
        if(sprawdz(i=0,j=-1))
            s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
        if(sprawdz(i=1,j=0))
            s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
        if(sprawdz(i=-1,j=0))
            s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
        if(sprawdz(i=-1,j=1))
            s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
        if(sprawdz(i=-1,j=-1))
            s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
        if(sprawdz(i=1,j=-1))
            s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
        if(sprawdz(i=1,j=1))
            s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
    std::cout<<"Dozwolone ruchy: "+s<<endl;
}

bool Krol::idz(int a,int b){
    int* akt=zwroc_akt_poz();
    bool wynik;
    if(!sprawdz(a-akt[0],b-akt[1])){
        wynik=false;
        std::cout<<"Nie wolno isc na ta pozycje!"<<endl;
    }
    else{
        if(czy_idz(a,b)){
            wynik=true;
            akt_poz[0]=a;
            akt_poz[1]=b;
        }
        else
            std::cout<<"Nie wolno isc na ta pozycje!"<<endl;
    }    
    return wynik;
}

int* Krol::zwroc_akt_poz(){
    return akt_poz;
}

void Krol::set_akt_poz(int a,int b){
    idz(a,b);
}

bool Krol::sprawdz(int p,int d){
    int* poz=zwroc_akt_poz();
    if(poz[0]+p<8 && poz[0]+p>=0 && poz[1]+d<8 && poz[1]+d>=0)
        return true;
    return false;
}

bool Krol::czy_idz(int p,int d){
    int* akt=zwroc_akt_poz();
    int wynik=false;
    int i,j;
          if(sprawdz(i=0,j=1) && p==akt[0] && d==akt[1]+1)
             wynik=true;
          if(!wynik && sprawdz(i=0,j=-1)&& p==akt[0] && d==akt[1]-1)
               wynik=true;
          if(!wynik && sprawdz(i=1,j=0)&& p==akt[0]+1 && d==akt[1])
            wynik=true;
          if(!wynik && sprawdz(i=-1,j=0)&& p==akt[0]-1 && d==akt[1])
            wynik=true;
          if(!wynik && sprawdz(i=-1,j=1)&& p==akt[0]-1 && d==akt[1]+1)
            wynik=true;
          if(!wynik && sprawdz(i=-1,j=-1)&& p==akt[0]-1 && d==akt[1]-1)
               wynik=true;
          if(!wynik && sprawdz(i=1,j=-1)&& p==akt[0]+1 && d==akt[1]-1)
            wynik=true;
          if(sprawdz(i=1,j=1)&& p==akt[0]+1 && d==akt[1]+1)
            wynik=true;
    return wynik;
}

std::string Krol::toString(){
    return Figura::toString()+", aktualna pozycja: "+convertInt(akt_poz[0])+", "+convertInt(akt_poz[1]);
}


