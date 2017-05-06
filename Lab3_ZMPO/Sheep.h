#ifndef SHEEP_H
#define	SHEEP_H
#include <string>

class Sheep
{
public:
        Sheep();
        std::string get_voice();
    private: 
        std::string voice;
};
#endif	/* SHEEP_H */

