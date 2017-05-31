#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "Datum.h"

enum Geschlecht
{
    male,
    female,
    unknown
};

class Person
{
    std::string d_vorname, d_nachname;
    Datum d_geburtsdatum;
    Geschlecht d_geschlecht;

public:
    Person(std::string, std::string, Datum, enum Geschlecht);
    void printName();
    Datum getGeburtsdatum();
    Geschlecht getGeschlecht();
};

#endif //PERSON_H

