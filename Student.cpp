
#include "Person.cpp"
#include "Student.h"
#include <string>

using namespace std;

Student::Student(string sVorname, string sNachname/*, Datum dtGeburtsdatum*/, Geschlecht enumGeschlecht, int iMatrikelnummer, string sHochschule, string sStudiengang)
:Person(sVorname, sNachname, /*dtGeburtsdatum,*/ enumGeschlecht)
{
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
    return d_Hochschule;
}

string Student::getStudiengang()
{
    return d_Studiengang;
}

void Student::setMatrikelnummer( int iMatrikelnummer )
{
    d_Matrikelnummer = iMatrikelnummer;
}

void Student::setHochschule( string sHochschule )
{
    d_Hochschule = sHochschule;
}

void Student::setStudiengang( string sStudiengang )
{
    d_Studiengang = sStudiengang;
}

void Student::printName()
{
    //cout << d_vorname << " " << d_nachname<<endl;
    //cout << "Geschlecht: "<<d_geschlecht<<endl;
    Person::printName();
    cout << "Matrikelnummer: "<<d_Matrikelnummer<<endl;
    cout << "Hochschule: "<<d_Hochschule<<endl;
    cout << "Studiengang: "<<d_Studiengang<< endl<<endl;
}
