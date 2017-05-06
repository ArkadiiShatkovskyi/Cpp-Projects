#include "Gra.h"
#include <string>
#include <cstring>
#include <iostream>

using namespace std;

Gra::Gra():Krol(7,4),Pion(6,0),Wieza(7,0),Skoczek(7,1),Goniec(7,2),Hetman(7,3){
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            szachownica[i][j]='0';
            
    szachownica[7][3]='H';
    szachownica[7][4]='K';
    szachownica[6][0]='P';
    szachownica[7][0]='W';
    szachownica[7][1]='S';
    szachownica[7][2]='G';
}
    
void Gra::idz(std::string figura,int poz1,int poz2){
    bool flaga=false;
    if(figura=="Pion" && szachownica[poz1][poz2]=='0'){
        int* aktPoz=Pion::zwroc_akt_poz();
        bool t=Pion::idz(poz1,poz2);
        szachownica[aktPoz[0]][aktPoz[1]]=t?'0':'P';
    }
    else if(figura=="Krol" && szachownica[poz1][poz2]=='0'){
        int* aktPoz=Krol::zwroc_akt_poz();
        bool t=Krol::idz(poz1,poz2);
        szachownica[aktPoz[0]][aktPoz[1]]=t?'0':'K';
    }
    else if(figura=="Goniec" && szachownica[poz1][poz2]=='0'){
        int* aktPoz=Goniec::zwroc_akt_poz();
        bool t=Goniec::idz(poz1,poz2);
        szachownica[aktPoz[0]][aktPoz[1]]=t?'0':'G';
    }
    else if(figura=="Wieza" && szachownica[poz1][poz2]=='0'){
        int* aktPoz=Wieza::zwroc_akt_poz();
        bool t=Wieza::idz(poz1,poz2);
        szachownica[aktPoz[0]][aktPoz[1]]=t?'0':'W';
    }
    else if(figura=="Skoczek" && szachownica[poz1][poz2]=='0'){
        int* aktPoz=Skoczek::zwroc_akt_poz();
        bool t=Skoczek::idz(poz1,poz2);
        szachownica[aktPoz[0]][aktPoz[1]]=t?'0':'S';
    }
    else if(figura=="Hetman" && szachownica[poz1][poz2]=='0'){
        int* aktPoz=Hetman::zwroc_akt_poz();
        bool t=Hetman::idz(poz1,poz2);
        szachownica[aktPoz[0]][aktPoz[1]]=t?'0':'H';
    }
    else{
        cout<<"Nie ma takiej figury"<<endl;
    }
}

void Gra::podaj_mozliwe_ruchy(std::string figura){
    if(figura=="Hetman"){
       cout<<"\nHetman: ";
       Hetman::podaj_dozwolone_ruchy();
    }
    else if(figura=="Pion"){
       cout<<"\nPion: ";
       Pion::podaj_dozwolone_ruchy();
    }
    else if(figura=="Krol"){
       cout<<"\nKrol: ";
       Krol::podaj_dozwolone_ruchy();
    }
    else if(figura=="Wieza"){
       cout<<"\nWieza: ";
       Wieza::podaj_dozwolone_ruchy();
    }
    else if(figura=="Skoczek"){
       cout<<"\nSkoczek: ";
       Skoczek::podaj_dozwolone_ruchy();
    }
    else if(figura=="Goniec"){
       cout<<"\nGoniec: ";
       Goniec::podaj_dozwolone_ruchy();
    }
    else
        cout<<"Nie poprawne dane!"<<endl;
}

void Gra::podaj_pozycje(std::string figura){
    if(figura=="Hetman"){
       cout<<"\nHetman: ";
       int* z=Hetman::zwroc_akt_poz();
       cout<<"a:"<<z[0]<<" ,b:"<<z[1]<<endl;
    }
    else if(figura=="Pion"){
       cout<<"\nPion: ";
       int* z=Pion::zwroc_akt_poz();
       cout<<"a:"<<z[0]<<" ,b:"<<z[1]<<endl;
    }
    else if(figura=="Krol"){
       cout<<"\nKrol: ";
       int* z=Krol::zwroc_akt_poz();
       cout<<"a:"<<z[0]<<" ,b:"<<z[1]<<endl;
    }
    else if(figura=="Wieza"){
       cout<<"\nWieza: ";
       int* z=Wieza::zwroc_akt_poz();
       cout<<"a:"<<z[0]<<" ,b:"<<z[1]<<endl;
    }
    else if(figura=="Skoczek"){
       cout<<"\nSkoczek: ";
       int* z=Skoczek::zwroc_akt_poz();
       cout<<"a:"<<z[0]<<" ,b:"<<z[1]<<endl;
    }
    else if(figura=="Goniec"){
       cout<<"\nGoniec: ";
       int* z=Goniec::zwroc_akt_poz();
       cout<<"a:"<<z[0]<<" ,b:"<<z[1]<<endl;
    }
    else
        cout<<"Nie poprawne dane!"<<endl;
}

std::string Gra::toString(){
    return Hetman::toString()+"\n"+Pion::toString()+"\n"+Goniec::toString()+"\n"+Skoczek::toString()+"\n"+Krol::toString()+"\n"+Wieza::toString();
}  
