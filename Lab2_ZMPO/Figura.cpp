#include "Figura.h"
#include <string>
#include <iostream>
#include <sstream>


using namespace std;

Figura::Figura(std::string name,int a,int b){
    this->name=name;
    this->nom_poz=new int[2];
    for(int i=0;i<2;i++){
        if(i==0)
            nom_poz[i]=a;
        else
            nom_poz[i]=b;
    }
    //this->nom_poz[0]=a;
    //this->nom_poz[1]=b;
}

int* Figura::zwroc_nom_poz(){
    return nom_poz;
}

std::string Figura::zwroc_nazwe(){
    return name;
}

std::string Figura::convertInt(int number){
        stringstream ss;
        ss<<number;
        return ss.str();
    }

std::string Figura::toString(){
    int* s=zwroc_nom_poz();
    return "Figura: "+zwroc_nazwe()+", nominalna pozycja: "+convertInt(s[0])+","+convertInt(s[1]);
}
