
#ifndef ODCINEK_H
#define	ODCINEK_H
#include <string>

class Odcinek{
public:
    Odcinek(int ograniczenie,bool dop_rower,bool dop_sam);
    Odcinek();
    int getOgraniczenie();
    bool dop_rower();
    bool dop_sam();   
private:
    int ograniczenie;
    bool dop_row;
    bool dop_s;
};

#endif	/* ODCINEK_H */

