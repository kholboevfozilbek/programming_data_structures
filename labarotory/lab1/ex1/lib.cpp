/// non-public part

#include <iostream>
#include <stdexcept>
#include "lib.h"
using namespace std;

Employee::Employee(string N, string S, string P, double M)
{
    name = N;
    surname = S;
    position = P;

    if (M < 0) throw logic_error("Negative salary NOT allowed!!");
    salary = M;
}

void Employee::print()
{
    cout << name << " " << surname << endl;
    cout << position << " salary = $ " << salary << endl;
}

void Employee::incSalary(double increase)
{
    if (increase < 0) throw logic_error("Negative salary NOT allowed!!");

    salary = salary + increase;
}

void Employee::setName(string N)
{
    name = N;
}
string Employee::getName()
{
    return name;
}

void Employee::setSurname(string S)
{
    surname = S;
}
string Employee::getSurname()
{
    return surname;
}

void Employee::setPosition(string P)
{
    position = P;
}
string Employee::getPosition()
{
    return position;
}


void Employee::setSalary(double new_sal)
{
    if (new_sal < 0) throw logic_error("Negative salary NOT allowed!!");
    salary = new_sal;
}
double Employee::getSalary()
{
    return salary;
}


void print(Employee e)
{
    cout << e.name << " " << e.surname << endl;
    cout << e.position << " salary $ " << e.salary << endl;
}

