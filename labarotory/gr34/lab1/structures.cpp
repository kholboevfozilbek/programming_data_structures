
#include <iostream>
#include<string>
#include "lib.h"

using namespace std;

int main()
{
    Employee e;
    e.name = "John";
    e.surname = "Smith";
    e.position = "programmer";
    e.salary = 1234.5;

    e.print();
    e.setSalary(18000);

    e.print();
    Employee e1("Anne", "Taylor", "analyst", 3214);
    e1.print();
    //print(e);
}
