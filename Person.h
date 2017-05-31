#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>

enum Geschlecht
{
    male,
    female,
    undefined
};

class Person
{
    std::string d_vorname, d_nachname;
    Datum d_geburtsdatum;
    enum Geschlecht d_geschlecht;

public:
    Person();
    Person(std::string, std::string, Datum, enum Geschlecht);
    void printName();
    Datum getGeburtsdatum();
    enum Geschlecht getGeschlecht();
};

#endif //_PERSON_H_

