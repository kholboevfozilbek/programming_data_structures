#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
    float salary;

    /// methods of the structure
    void print();
};

void Person::print()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Salary " << salary << endl; /// this is method of structure
}

void Display_data(Person p);
Person get_data(Person p);

int main()
{
    Person p1;

    p1 = get_data(p1);
    cout << "\n-------------------------------\n";
    cout << "Displaying information ..." << endl;
    p1.print();
    Display_data(p1);

    Person *p2, d;

    p2 = &d;

    p2->name = "Sunnat";
    p2->age = 18;
    p2->salary = 1234;

    p2->print();
    return 0;
}

Person get_data(Person p)
{
    cout << "Enter name: "; cin >> p.name;
    cout << "Enter age : "; cin >> p.age;
    cout << "Enter salary: "; cin >> p.salary;
    return p;
}

void Display_data(Person p)
{
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary " << p.salary << endl; /// this is just regular function
}
