///main!

#include <iostream>
#include "unbounded_lib.h"
using namespace std;


int main()
{
    Queue uq;

    int x;
    char check;

    while(true)
    {
        cout << "Do you want to give element? [y/n]: "; cin >> check;

        if (check == 'n' || check == 'N')
            break;

        cout << "Enter:  ";
        cin >> x;

        uq.enque(x); cout << endl;
        uq.print();

    }

    return 0;
}
