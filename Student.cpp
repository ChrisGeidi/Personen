
#include "Person.h"
#include <string>

using namespace std;

Student::Student(string sVorname, string sNachname, Datum dtGeburtsdatum, enumGeschlecht, int iMatrikelnummer, string sHochschule, string sStudiengang)
{
    Person(sVorname, sNachname, dtGeburtsdatum, enumGeschlecht);
    d_Matrikelnummer = iMatrikelnummer;
    d_Hochschule = sHochschule;
    d_Studiengang = sStudiengang;
}

int Student::getMatrikelnummer()
{
    return d_Matrikelnummer;
}

string Student::getHochschule()
{
    return d_Hochschule:
}

string Student::getStudiengang()
{
    return d_Studiengang;
}
