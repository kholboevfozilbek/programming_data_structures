/// non-public part

#include "lib.h"
#include <iostream>
#include <stdexcept>
using namespace std;

void Employee::print()
{
    cout << name << " " << surname << endl;
    cout << position << " salary = $ " << salary << endl;
}

float Employee::getSalary()
{
    return salary;
}

void Employee::setSalary(float new_sal)
{
    if( new_sal < 0) throw logic_error("Negative salary!!! wrong!!!");
    salary = new_sal;
}

Employee::Employee(string N, string S, string P, float M)
{
    name = N;
    surname = S;
    position = P;
    if (M<0) throw logic_error("Negative salary!!! wrong!!!");
    salary = M;
}



void print(Employee x)
{
    cout << x.name << " " << x.surname << endl;
    cout << x.position << " salary $ " << x.salary << endl;
}
