/// public part of library (header file )

#include <iostream>
#include <string>
using namespace std;


struct Employee
{
    string name;
    string surname;
    string position;
    double salary;

    Employee(string N="", string S="", string P="", double M=0); /// constructors

    ///methods of structure
    void print();
    void incSalary(double increase);

    /// setters and getters
    void setName(string N);
    string getName();

    void setSurname(string S);
    string getSurname();

    void setPosition(string P);
    string getPosition();

    void setSalary(double new_sal);
    double getSalary();
};

void print(Employee e);
