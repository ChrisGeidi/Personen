
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student : public Person
{

    int d_Matrikelnummer;
    string d_Hochschule;
    string d_Studiengang;
public:

    Student( string, string, /*Datum,*/Geschlecht, int, string, string );
    // get functions
    int getMatrikelnummer();
    string getHochschule();
    string getStudiengang();
    // set functions
    void setMatrikelnummer( int );
    void setHochschule( string );
    void setStudiengang( string );

    void printName();

};

#endif // STUDENT_H
