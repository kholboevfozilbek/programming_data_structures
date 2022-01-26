/// all function body, and definitions are written here
#include <iostream>
#include "library.h"
#include <stdexcept>
using namespace std;


void Sinfdosh::print()
{
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "Study: " << study <<endl;
    cout << "City: " << place <<endl;
    cout << "Age: " << age <<endl;
    cout << "Grade: " << grade << endl;
    cout << "Married: " << maritial <<endl;
}

int Sinfdosh::getSalary()
{
    return age;
}

void Sinfdosh::setSalary( int new_age)
{
    ///check the age whether it is correct or not!!
    if (new_age < 0 || new_age > 100 ) throw logic_error("WRONG AGE IS ENTERED!!!");
    age = new_age;
}

/*void print(Sinfdosh x)
{
    cout << "Name: " << x.name << endl;
    cout << "Surname: " << x.surname << endl;
    cout << "Study: " << x.study <<endl;
    cout << "City: " << x.place <<endl;
    cout << "Age: " << x.age <<endl;
    cout << "Grade: " << x.grade << endl;
    cout << "Married: " << x.maritial <<endl;
}*/
