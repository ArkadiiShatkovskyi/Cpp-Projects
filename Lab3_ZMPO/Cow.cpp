#include "Cow.h"
#include <string>

Cow::Cow(){
    this->voice="Muuu";
}

std::string Cow::get_voice(){
    return voice;
}
