#include <cstdlib>
#include <string>
#include <iostream>
#include "Droga.h"
#include "Pojazd.h"
#include "Rower.h"
#include "Samochod.h"
#include "Odcinek.h"

using namespace std;

int main(int argc, char** argv) {
    
    Samochod samochod("Adam",60,"471DW");
    Rower rower("Lukasz",15);
    
    Odcinek od1(30,true,true);
    Odcinek od2(50,false,true);
    Odcinek od3(60,true,true);
    Odcinek* od=new Odcinek[3];
    od[0]=od1;
    od[1]=od2;
    od[2]=od3;
    
    Droga droga(od);
    std::string s;
    std::string s2;
    s=droga+samochod;
    //s=droga+rower;
    cout<<s<<endl;
    //cout<<s2<<endl;
    return 0;
}

