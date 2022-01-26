/// main!

#include <iostream>
#include "lib_stack.h"
using namespace std;



int main()
{
    Stack s(5);

    float x;
    char check;
    do
    {
        cout << "\nInsert an element:  "; cin >> x;

        s.push(x);
        cout << "stack now:  "; s.print();

        cout << "Do you want to continue? [y/n]: "; cin >> check;
    }
    while(check == 'y' || check == 'Y');

    Stack s1 = s; // same as s1(s);

    cout << "\n\nOur copied stack\n"; s1.print();

    /// there is big difference between copy constructor and assignment operator

    Stack s2(8);
    s2.push(-5);
    s2.push(3);
    s2.push(12);
    s2.push(2);
    s2.push(-7);
    s2.push(1);

    cout << "\n\ns2 stack: \n"; s2.print();

    s2 = s1;

    cout << "\n\ns2 is assigned to s1: \nour s2 now: \n";
    s2.print();

    if (s2 == s1)
    {
        cout << "\n\nYES s2 stack is correctly assigned and now is EQUAL to s1";
    }

    return 0;
}
