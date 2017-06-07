#include <string>
#include "Person.h"

using namespace std;

/*Person::Person(string vorname, string nachname)
:
    d_vorname(vorname),
    d_nachname(nachname)
{

}*/

Person::Person(string vorname, string nachname,/* Datum geburtsdatum,*/ Geschlecht geschlecht)
{
    d_vorname = vorname;
    d_nachname = nachname;
    //d_geburtsdatum = geburtsdatum;
    d_geschlecht = geschlecht;
}

void Person::printName()
{
    cout << d_vorname << " " << d_nachname<<endl;
    cout << "Geschlecht: "<<d_geschlecht<<endl<<endl;
}

/*
Datum Person::getGeburtsdatum()
{
    return d_geburtsdatum;
}
*/

Geschlecht Person::getGeschlecht()
{
    return d_geschlecht;
}
