#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int index;              /// fields and members
    float avg;
    bool avgSet = false;

    ///methods constructors

    Student(string N="", int I=0, float=0);

    Student(); ///parameterless 'default value initialize' default constructor
    //Student() = default; /// no initialize no parameter default constructor

    Student(const Student &o);

};

Student::Student(string N, int I, float A)
{
    name = N;
    index = I;
    avg = A;
}
Student::Student()
{
    name = "";
    index = 0;  ///default constructor
    avg = 0;
    cout << "No_Parameter, Default value initializing default constructor is called" << endl;
}


int main()
{
    Student t;

    cout << t.avg << endl;
    return 0;
}
