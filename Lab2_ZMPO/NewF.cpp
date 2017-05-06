#include "NewF.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

NewF::NewF(int a,int b):Figura("NewF",a,b){
    this->akt_poz[0]=a;
    this->akt_poz[1]=b;
}

void  NewF::dodaj_Przec(int a,int b,int jaki){
    if(jaki==1){
       przeciw[0]=a;
       przeciw[1]=b;
    }
    else if(jaki==2){
       przeciw2[0]=a;
       przeciw2[1]=b;
    }
}

void NewF::podaj_dozwolone_ruchy(){
    int* poz=zwroc_akt_poz();
    std::string s;
    int i,j;
        if(sprawdz(i=-1,j=1)){
            if(przeciw[0]==poz[0]+i && przeciw[1]==poz[1]+j){
                s+=convertInt(przeciw[0]+i)+","+convertInt(przeciw[1]+j)+"; ";
                if(przeciw2[0]==przeciw[0]+2*i && przeciw2[1]==przeciw[1]+2*j){
                    s+=convertInt(przeciw2[0]+i)+","+convertInt(przeciw2[1]+j)+"; ";
                }
                else if(przeciw2[0]==przeciw[0]+i-1 && przeciw2[1]==przeciw[1]+j-1){
                    s+=convertInt(przeciw2[0]-1)+","+convertInt(przeciw2[1]-1)+"; ";
                }
                else if(przeciw2[0]==przeciw[0]+i+1 && przeciw2[1]==przeciw[1]+j-1){
                    s+=convertInt(przeciw2[0]+1)+","+convertInt(przeciw2[1]-1)+"; ";
                }
                else if(przeciw2[0]==przeciw[0]+i+1 && przeciw2[1]==przeciw[1]+j+2){
                    s+=convertInt(przeciw2[0]+1)+","+convertInt(przeciw2[1]+1)+"; ";
                }
            }
            else
                s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
        }
        if(sprawdz(i=-1,j=-1)){
            if(przeciw[0]==poz[0]+i && przeciw[1]==poz[1]+j){
                s+=convertInt(przeciw[0]+i)+","+convertInt(przeciw[1]+j)+"; ";
                if(przeciw2[0]==przeciw[0]+2*i && przeciw2[1]==przeciw[1]+2*j){
                    s+=convertInt(przeciw2[0]+i)+","+convertInt(przeciw2[1]+j)+"; ";
                }
                else if(przeciw2[0]==przeciw[0]+i-1 && przeciw2[1]==przeciw[1]+j+1){
                    s+=convertInt(przeciw2[0]-1)+","+convertInt(przeciw2[1]+1)+"; ";
                }
                else if(przeciw2[0]==przeciw[0]+i+1 && przeciw2[1]==przeciw[1]+j-1){
                    s+=convertInt(przeciw2[0]+1)+","+convertInt(przeciw2[1]-1)+"; ";
                }
                else if(przeciw2[0]==przeciw[0]+i+1 && przeciw2[1]==przeciw[1]+j+2){
                    s+=convertInt(przeciw2[0]+1)+","+convertInt(przeciw2[1]+1)+"; ";
                }
            }
            else
                s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
        }
        if(sprawdz(i=1,j=-1)){
            if(przeciw[0]==poz[0]+i && przeciw[1]==poz[1]+j){
                s+=convertInt(przeciw[0]+i)+","+convertInt(przeciw[1]+j)+"; ";
                if(przeciw2[0]==przeciw[0]+2*i && przeciw2[1]==przeciw[1]+2*j){
                    s+=convertInt(przeciw2[0]+i)+","+convertInt(przeciw2[1]+j)+"; ";
                }
                else if(przeciw2[0]==przeciw[0]+i-1 && przeciw2[1]==przeciw[1]+j-1){
                    s+=convertInt(przeciw2[0]-1)+","+convertInt(przeciw2[1]-1)+"; ";
                }
                else if(przeciw2[0]==przeciw[0]+i-1 && przeciw2[1]==przeciw[1]+j+1){
                    s+=convertInt(przeciw2[0]-1)+","+convertInt(przeciw2[1]+1)+"; ";
                }
                else if(przeciw2[0]==przeciw[0]+i+1 && przeciw2[1]==przeciw[1]+j+1){
                    s+=convertInt(przeciw2[0]+1)+","+convertInt(przeciw2[1]+1)+"; ";
                }
            }
            else
                s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
        }
        if(sprawdz(i=1,j=1)){
            if(przeciw[0]==poz[0]+i && przeciw[1]==poz[1]+j){
                s+=convertInt(przeciw[0]+i)+","+convertInt(przeciw[1]+j)+"; ";
                if(przeciw2[0]==przeciw[0]+2*i && przeciw2[1]==przeciw[1]+2*j){
                    s+=convertInt(przeciw2[0]+i)+","+convertInt(przeciw2[1]+j)+"; ";
                }
                else if(przeciw2[0]==przeciw[0]+i-1 && przeciw2[1]==przeciw[1]+j-1){
                    s+=convertInt(przeciw2[0]-1)+","+convertInt(przeciw2[1]-1)+"; ";
                }
                else if(przeciw2[0]==przeciw[0]+i+1 && przeciw2[1]==przeciw[1]+j-1){
                    s+=convertInt(przeciw2[0]+1)+","+convertInt(przeciw2[1]-1)+"; ";
                }
                else if(przeciw2[0]==przeciw[0]+i-1 && przeciw2[1]==przeciw[1]+j+1){
                    s+=convertInt(przeciw2[0]-1)+","+convertInt(przeciw2[1]+1)+"; ";
                }
            }
            else
                s+=convertInt(poz[0]+i)+","+convertInt(poz[1]+j)+"; ";
        }
        
    std::cout<<"Dozwolone ruchy: "+s<<endl;
}

bool NewF::idz(int a,int b){
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
          }
          else
            std::cout<<"Nie wolno isc na ta pozycje!"<<endl;
    }
    return wynik;
}

int* NewF::zwroc_akt_poz(){
    return akt_poz;
}

void NewF::set_akt_poz(int a,int b){
    idz(a,b);
}

bool NewF::sprawdz(int p,int d){
    int* poz=zwroc_akt_poz();
    if(poz[0]+p<8 && poz[0]+p>=0 && poz[1]+d<8 && poz[1]+d>=0)
        return true;
    return false;
}

bool NewF::czy_idz(int p,int d){
    int* akt=zwroc_akt_poz();
    bool wynik=false;
    bool pr=false;
    int i,j;
          if(sprawdz(i=-1,j=1)&& p==akt[0]-1 && d==akt[1]+1){
            wynik=true;
            if(przeciw[0]==akt[0]-i && przeciw[1]==akt[1]+1){
                pr=true;
                wynik=false;
            }
          }
          if(sprawdz(i=-1,j=-1)&& p==akt[0]-1 && d==akt[1]-1){
             wynik=true;
             if(przeciw[0]==akt[0]-1 && przeciw[1]==akt[1]-1){
                pr=true;
                wynik=false;
             }
          }
          if(sprawdz(i=1,j=-1)&& p==akt[0]+1 && d==akt[1]-1){
            wynik=true;
              if(przeciw[0]==akt[0]+1 && przeciw[1]==akt[1]-1){
                pr=true;
                wynik=false;
              }
          }
          if(sprawdz(i=1,j=1)&& p==akt[0]+1 && d==akt[1]+1){
            wynik=true;
              if(przeciw[0]==akt[0]+1 && przeciw[1]==akt[1]+1){
                pr=true;
                wynik=false;
              }
          }
          if(sprawdz(i=1,j=1)&& p-2==akt[0] && d-2==akt[1] && p==przeciw[0]+1 && d==przeciw[1]+1){
              wynik=true;
              przeciw[0]=-1;
              przeciw[1]=-1;
          }
          if(sprawdz(i=-1,j=-1)&& p+1==akt[0] && d+1==akt[1] && p==przeciw[0]-1 && d==przeciw[1]-1){
              wynik=true;
              przeciw[0]=-1;
              przeciw[1]=-1;
          }
          if(sprawdz(i=1,j=-1)&& p-2==akt[0] && d+2==akt[1] && p==przeciw[0]+1 && d==przeciw[1]-1){
              wynik=true;
              przeciw[0]=-1;
              przeciw[1]=-1;
          }
          if(sprawdz(i=-1,j=1)&& p+2==akt[0] && d-2==akt[1] && p==przeciw[0]-1 && d==przeciw[1]+1){
              wynik=true;
              przeciw[0]=-1;
              przeciw[1]=-1;
          }
    return wynik;
}

std::string NewF::toString(){
    return Figura::toString()+", aktualna pozycja: "+convertInt(akt_poz[0])+", "+convertInt(akt_poz[1]);
}



