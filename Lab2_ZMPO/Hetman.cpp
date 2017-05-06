#include "Hetman.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

Hetman::Hetman(int a,int b):Figura("Hetman",a,b){
    this->akt_poz[0]=a;
    this->akt_poz[1]=b;
}

Hetman::Hetman(std::string name,int a,int b):Figura(name,a,b){
    this->akt_poz[0]=a;
    this->akt_poz[1]=b;
}

void Hetman::podaj_dozwolone_ruchy(){
    int* poz=zwroc_akt_poz();
    std::string s;
    int i,j;
    for(i=0,j=1;j<8;j++){
        if(sprawdz(i,j))
            s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
    }
    for(i=0,j=-1;j>-8;j--){
        if(sprawdz(i,j))
            s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
    }
    for(i=1,j=0;i<8;i++){
        if(sprawdz(i,j))
            s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
    }
    for(i=-1,j=0;i>-8;i--){
        if(sprawdz(i,j))
            s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
    }
    for(i=-1,j=1;i>-8,j<8;i--,j++){
        if(sprawdz(i,j))
            s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
    }
    for(i=-1,j=-1;i>-8,j>-8;i--,j--){
        if(sprawdz(i,j))
            s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
    }
    for(i=1,j=-1;i<8,j>-8;i++,j--){
        if(sprawdz(i,j))
            s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
    }
    for(i=1,j=1;i<8,j<8;i++,j++){
        if(sprawdz(i,j))
            s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
    }
    std::cout<<"Dozwolone ruchy: "+s<<endl;
}

bool Hetman::idz(int a,int b){
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

int* Hetman::zwroc_akt_poz(){
    return akt_poz;
}

void Hetman::set_akt_poz(int a,int b){
    idz(a,b);
}

bool Hetman::sprawdz(int p,int d){
    int* poz=zwroc_akt_poz();
    if(poz[0]+p<8 && poz[0]+p>=0 && poz[1]+d<8 && poz[1]+d>=0)
        return true;
    return false;
}

bool Hetman::czy_idz(int p,int d){
    int* akt=zwroc_akt_poz();
    int wynik=false;
    int i,j;
        for(i=0,j=1;j<8;j++){
           if(sprawdz(i,j) && p==akt[0]+i && d==akt[1]+j)
             wynik=true;
        }
    if(!wynik)
        for(i=0,j=-1;j>-8;j--){
           if(sprawdz(i,j)&& p==akt[0]+i && d==akt[1]+j)
               wynik=true;
       }
    if(!wynik)
       for(i=1,j=0;i<8;i++){
          if(sprawdz(i,j)&& p==akt[0]+i && d==akt[1]+j)
            wynik=true;
       }
    if(!wynik)
       for(i=-1,j=0;i>-8;i--){
          if(sprawdz(i,j)&& p==akt[0]+i && d==akt[1]+j)
            wynik=true;
       }
    if(!wynik)
        for(i=-1,j=1;i>-8,j<8;i--,j++){
        if(sprawdz(i,j)&& p==akt[0]+i && d==akt[1]+j)
            wynik=true;
    }
    if(!wynik)
       for(i=-1,j=-1;i>-8,j>-8;i--,j--){
           if(sprawdz(i,j)&& p==akt[0]+i && d==akt[1]+j)
               wynik=true;
       }
    if(!wynik)
       for(i=1,j=-1;i<8,j>-8;i++,j--){
          if(sprawdz(i,j)&& p==akt[0]+i && d==akt[1]+j)
            wynik=true;
       }
    if(!wynik)
       for(i=1,j=1;i<8,j<8;i++,j++){
          if(sprawdz(i,j)&& p==akt[0]+i && d==akt[1]+j)
            wynik=true;
       }
    return wynik;
}

std::string Hetman::toString(){
    return Figura::toString()+", aktualna pozycja: "+convertInt(akt_poz[0])+", "+convertInt(akt_poz[1]);
}

