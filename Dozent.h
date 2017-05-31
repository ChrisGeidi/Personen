#ifndef _DOZENT_H_
#define _DOZENT_H_

#include "Person.h"

class Dozent : Person
{
    std::string d_Hochschule;
    std::string d_Fachrichtung;

    public:
    Dozent(std::string,std::string);
    std::string getHochschule();
    std::string getFachrichtung();
};




#endif // _DOZENT_H_
