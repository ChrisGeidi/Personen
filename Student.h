
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student : Person
{
    Student( int, string, string );
    int d_Matrikelnummer;
    string d_Hochschule;
    string d_Studiengang;
public:
    // get functions
    int getMatrikelnummer();
    string getHochschule();
    string getStudiengang();
    // set functions
    void setMatrikelnummer( int );
    void setHochschule( string );
    void setStudiengang( string );

};

#endif // STUDENT_H
