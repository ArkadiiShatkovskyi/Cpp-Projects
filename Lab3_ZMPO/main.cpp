#include <cstdlib>
#include "Herd.h"
#include "Cat.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    Herd x;
    Herd p;
    //cout<<x->get_voice()<<endl;
    /** Herd c1=x+new Cat()+new Dog()+new Cow()+new Sheep();
    Herd r1=p+new Cat()+new Sheep();
    std::cout<<c1.get_voice()<<endl;
    Herd o=c1-r1+new Crow();
    std::cout<<o.get_voice()<<endl;
    o=o+new Cat()+new Dog()+new Sheep();
    std::cout<<o.get_voice()<<endl;
    o=o-new Dog();
    std::cout<<o.get_voice()<<endl;
    o=o-new Cat();
    std::cout<<o.get_voice()<<endl;
    **/
    Herd c1=Herd()+new Cat()+new Dog();
    cout<<c1.get_voice()<<endl;
    Herd r1=c1*2;
    cout<<r1.get_voice()<<endl;
    Herd r2=c1*2.0;
    cout<<r2.get_voice()<<endl;
    
    return 0;
}

