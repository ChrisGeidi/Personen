
#include "Student.cpp"

int main()
{
   /* Person PersonA("Achim","oasdasf",male);
    Student StudentB("asfasdf","sdfasdaga",male,45454544,"osna","Ing");
    PersonA.printName();
    StudentB.printName();*/

    Person * ptrPerson ;
    ptrPerson = new Student (" Max "," Mustermann " ,male, 12345678, "osna", "Ing") ;
    ptrPerson -> printName ();
    cout <<endl ;


    return 0;
}
