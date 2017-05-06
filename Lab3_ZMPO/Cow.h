#ifndef COW_H
#define	COW_H
#include <string>

class Cow
{
public:
        Cow();
        std::string get_voice();
    private: 
        std::string voice;
};
#endif	/* COW_H */

