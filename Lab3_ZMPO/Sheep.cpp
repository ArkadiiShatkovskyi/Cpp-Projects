#include "Sheep.h"
#include <string>

Sheep::Sheep(){
    this->voice="Beee";
}

std::string Sheep::get_voice(){
    return voice;
}

