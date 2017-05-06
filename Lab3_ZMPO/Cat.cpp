#include "Cat.h"
#include <string>

Cat::Cat(){
    this->voice="Miau";
}

std::string Cat::get_voice(){
    return voice;
}

