#ifndef CROW_H
#define	CROW_H
#include <string>

class Crow
{
public:
        Crow();
        std::string get_voice();
    private: 
        std::string voice;
};
#endif	/* CROW_H */

