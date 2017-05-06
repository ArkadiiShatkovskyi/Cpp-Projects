#ifndef ANIMAL_H
#define	ANIMAL_H
#include <string>
#include "Cat.h"
#include "Dog.h"
#include "Cow.h"
#include "Crow.h"
#include "Sheep.h"

class Herd{
   public:
       Herd();
       Herd(std::string voice);
       std::string get_voice();
       void set_voice(std::string s);
       friend Herd operator +(Herd a,Herd b);
       friend Herd operator+(Herd a,Cat* b);
       friend Herd operator+(Herd a,Dog* b);
       friend Herd operator+(Herd a,Sheep* b);
       friend Herd operator+(Herd a,Crow* b);
       friend Herd operator+(Herd a,Cow* b);
       
       friend Herd operator-(Herd a,Herd b);
       friend Herd operator-(Herd a,Cat* b);
       friend Herd operator-(Herd a,Crow* b);
       friend Herd operator-(Herd a,Dog* b);
       friend Herd operator-(Herd a,Sheep* b);
       friend Herd operator-(Herd a,Cow* b);
       
       friend Herd operator*(Herd a,int b);
       friend Herd operator*(Herd a,double b);
       
   private:
       std::string voice;
};
#endif	/* ANIMAL_H */

