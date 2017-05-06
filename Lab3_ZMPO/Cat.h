#ifndef CAT_H
#define	CAT_H
#include <string>


class Cat 
{
    public:
        Cat();
        std::string get_voice();
    private: 
        std::string voice;
};
#endif	/* CAT_H */

