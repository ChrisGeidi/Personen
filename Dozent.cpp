#include "Dozent.h"

Dozent::Dozent(std::string Hs, std::string Fr)
: Person(vorname,nachname,geburtsdatum,geschlecht)
{
    d_Hochschule=Hs;
    d_Fachrichtung=Fr;
}

std::string Dozent::getHochschule()
{
    return d_Hochschule;
}

std::string Dozent::getFachrichtung()
{
    return d_Fachrichtung;
}
