
#ifndef STUDENT_H
#define STUDENT_H


class Student
{
    int d_Matrikelnummer;
    string d_Hochschule;
    string d_Studiengang;
public:
    int getMatrikelnummer();
    string getHochschule();
    string getStudiengang();
};

#endif // STUDENT_H
