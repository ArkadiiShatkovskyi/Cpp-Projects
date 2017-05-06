/* 
 * File:   main.cpp
 * Author: arek
 *
 * Created on October 11, 2015, 5:07 PM
 */

#include <cstdlib>
#include <iostream>

#include "Operations.h"
using namespace std;

int main() {
    char* liczba1="24854353345";
    char* liczba2="14534575622";
    char* liczba3="14534575622";
    char* liczba4="14534575622";
    Operations *op=new Operations(liczba1);
    op->sum(liczba2);
    op->subst(liczba3);
    op->multipl(liczba4);
    return 0;
}

