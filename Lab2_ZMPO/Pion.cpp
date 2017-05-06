#include "Pion.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

Pion::Pion(int a,int b):Figura("Pion",a,b){
    this->akt_poz[0]=a;
    this->akt_poz[1]=b;
    czy_het=false;
}

void Pion::podaj_dozwolone_ruchy(){
    if(!czy_het){
    int* poz=zwroc_akt_poz();
    std::string s;
    int i,j;
        if(sprawdz(i=-1,j=0))
            s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
    std::cout<<"Dozwolone ruchy: "+s<<endl;
    }
    else
        podaj_dozwolone_ruchy_h();
}

void Pion::podaj_dozwolone_ruchy_h(){
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

bool Pion::idz(int a,int b){
    bool wynik;
       int* akt=zwroc_akt_poz(); 
       if(!sprawdz(a-akt[0],b-akt[1])){
         wynik=false;
         std::cout<<"Nie wolno isc na ta pozycje!"<<endl;
       }
       else{
          if(czy_idz(a,b)){
            wynik=true;
            akt_poz[0]=a;
            akt_poz[1]=b;
            czy_het=a==0?true:czy_het;
            if(czy_het)
              std::cout<<"Pion -> Hetman"<<endl;
          }
          else if(czy_het && czy_idz_h(a,b)){
            wynik=true;
            akt_poz[0]=a;
            akt_poz[1]=b;
            czy_het=a==0?true:czy_het;
          }
          else
            std::cout<<"Nie wolno isc na ta pozycje!"<<endl;
    }
    return wynik;
}

int* Pion::zwroc_akt_poz(){
    return akt_poz;
}

void Pion::set_akt_poz(int a,int b){
    idz(a,b);
}

bool Pion::sprawdz(int p,int d){
    int* poz=zwroc_akt_poz();
    if(poz[0]+p<8 && poz[0]+p>=0 && poz[1]+d<8 && poz[1]+d>=0)
        return true;
    return false;
}

bool Pion::czy_idz(int p,int d){
    int* akt=zwroc_akt_poz();
    int wynik=false;
    if(!czy_het){
    int i,j;
          if(sprawdz(i=-1,j=0)&& p==akt[0]-1 && d==akt[1])
            wynik=true;
    }
    else
        wynik=czy_idz_h(p,d);
    return wynik;
}

bool Pion::czy_idz_h(int p,int d){
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

std::string Pion::toString(){
    return Figura::toString()+", aktualna pozycja: "+convertInt(akt_poz[0])+", "+convertInt(akt_poz[1]);
}



