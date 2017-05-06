#include "Odcinek.h"
#include <string>

Odcinek::Odcinek(int ograniczenie, bool dop_rower, bool dop_sam){
    this->ograniczenie = ograniczenie;
    this->dop_row=dop_rower;
    this->dop_s=dop_sam;
}

Odcinek::Odcinek(){}

int Odcinek::getOgraniczenie(){
    return ograniczenie;
}

bool Odcinek::dop_rower(){
    return dop_row;
}

bool Odcinek::dop_sam(){
    return dop_s;
}