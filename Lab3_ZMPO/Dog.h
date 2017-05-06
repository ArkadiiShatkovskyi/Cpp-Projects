#ifndef DOG_H
#define	DOG_H
#include <string>

class Dog
{
public:
        Dog();
        std::string get_voice();
    private: 
        std::string voice;
};
#endif	/* DOG_H */

