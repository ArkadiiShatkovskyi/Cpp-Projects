#include "Dog.h"
#include <string>

Dog::Dog(){
    this->voice="Hau";
}

std::string Dog::get_voice(){
    return voice;
}
