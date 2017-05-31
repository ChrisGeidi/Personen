
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student : Person
{
    Student(int, string, string);
    int d_Matrikelnummer;
    string d_Hochschule;
    string d_Studiengang;
public:
    int getMatrikelnummer();
    string getHochschule();
    string getStudiengang();
};

#endif // STUDENT_H
