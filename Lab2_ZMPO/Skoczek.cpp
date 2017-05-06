#include "Skoczek.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

Skoczek::Skoczek(int a,int b):Figura("Skoczek",a,b){
    for(int i=0;i<2;i++){
        if(i==0)
            akt_poz[i]=a;
        else
            akt_poz[i]=b;
    }
        //akt_poz[0]=a;
        //akt_poz[1]=b;
}

void Skoczek::podaj_dozwolone_ruchy(){
    int* poz=zwroc_akt_poz();
    std::string s;
    if(sprawdz(-2,-1)) s+=convertInt(poz[0]-2)+","+convertInt(poz[1]-1)+"; ";
    if(sprawdz(-2,1))  s+=convertInt(poz[0]-2)+","+convertInt(poz[1]+1)+"; ";
    if(sprawdz(-1,2))  s+=convertInt(poz[0]-1)+","+convertInt(poz[1]+2)+"; ";
    if(sprawdz(-1,-2)) s+=convertInt(poz[0]-1)+","+convertInt(poz[1]-2)+"; ";
    if(sprawdz(1,-2))  s+=convertInt(poz[0]+1)+","+convertInt(poz[1]-2)+"; ";
    if(sprawdz(2,-1))  s+=convertInt(poz[0]+2)+","+convertInt(poz[1]-1)+"; ";
    if(sprawdz(2,1))   s+=convertInt(poz[0]+2)+","+convertInt(poz[1]+1)+"; ";
    if(sprawdz(1,2))   s+=convertInt(poz[0]+1)+","+convertInt(poz[1]+2)+"; ";
    std::cout<<"Dozwolone ruchy: "+s<<endl;
}

bool Skoczek::idz(int a,int b){
    bool wynik;
    int* akt=zwroc_akt_poz();
    if(!sprawdz(a-akt[0],b-akt[1])){
        std::cout<<"Nie wolno isc na ta pozycje!"<<endl;
        wynik=false;
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

bool Skoczek::czy_idz(int p,int d){
    int* akt=zwroc_akt_poz();
    if(sprawdz(p,d)&&(p==akt[0]-2 && d==akt[1]-1||p==akt[0]-2 && d==akt[1]-1||p==akt[0]-2 && d==akt[1]-1||p==akt[0]-2 && d==akt[1]-1||p==akt[0]-2 && d==akt[1]-1||p==akt[0]-2 && d==akt[1]-1||p==akt[0]-2 && d==akt[1]-1||p==akt[0]-2 && d==akt[1]-1))
        return true;
    else
        return false;
}

int* Skoczek::zwroc_akt_poz(){
    return akt_poz;
}

void Skoczek::set_akt_poz(int a,int b){
    idz(a,b);
}

bool Skoczek::sprawdz(int p,int d){
    int* poz=zwroc_akt_poz();
    if(poz[0]+p<8 && poz[0]+p>=0 && poz[1]+d<8 && poz[1]+d>=0)
        return true;
    return false;
}

std::string Skoczek::toString(){
    int a=akt_poz[0];
    int b=akt_poz[1];
    return Figura::toString()+", aktualna pozycja: "+convertInt(a)+", "+convertInt(b);
}

