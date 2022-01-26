/// obligatory part for library ( header file ) - public part

#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    string name;
    string surname;
    string position;
    float salary;

    ///methods of the structure


    Employee(string N="", string S="", string P="", float M=0);  ///constructor

    void print();
    float getSalary();
    void setSalary(float new_sal);

};

void print(Employee x);
