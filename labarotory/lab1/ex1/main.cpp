
#include <iostream>
#include <string>
#include "lib.h"
using namespace std;

int main()
{
    Employee e;
    e.name = "Fozilbek";
    e.surname = "Kholboev";
    e.position = "CEO";
    e.salary = 999000000;

    e.print();
    e.setName("Jamolbek");
    e.setSurname("Xolboyev");
    e.setSalary(999999999);
    e.setPosition("Creator");
    e.incSalary(7777777777);

    e.print();

    cout << endl;
    cout << "Name: " << e.getName()  << endl;
    cout << "Salary: " <<e.getSalary() << endl;
    cout << "Position: " << e.getPosition() << endl;
    cout << "Surname: " << e.getSurname() << endl;
    cout << endl;

    Employee e1("Komilbek", "Xolboyev", "CoAuthor", 7777777777);
    e1.print();

    //print(e);

    return 0;
}
