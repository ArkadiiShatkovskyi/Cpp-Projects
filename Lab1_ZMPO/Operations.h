/* 
 * File:   Operations.h
 * Author: arek
 *
 * Created on October 11, 2015, 5:09 PM
 */

#include <string>
#include <iostream>
#ifndef OPERATIONS_H
#define	OPERATIONS_H

using namespace std;

class Operations {
public:
    Operations(char* licz1);
    void sum(char* liczb2);    //dodawanie
    void subst(char* liczb2);  //odejmowanie
    void multipl(char* liczb2);//mnozenie
private:
    char* readN1;
};

#endif	/* OPERATIONS_H */

