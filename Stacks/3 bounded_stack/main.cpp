#include <iostream>
#include "lib_stack.h"

using namespace std;


int main()
{
    Stack s1(5);

    double x;
    char choice;

    do
    {
        cout << "Enter a value: "; cin >> x;
        s1.push(x);
        cout << "\nNow our stack ...\n";
        s1.print();
        cout << "\n\nDo you want to add more element to stack? ";
        cout << " [y/n]: "; cin >> choice;
    }
    while(choice == 'y' || choice == 'Y');
    return 0;
}
