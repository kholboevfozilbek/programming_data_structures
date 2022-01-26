

#include <iostream>
#include "unbounded_lib.h"
using namespace std;


int  main()
{
    Queue q;

    int x;
    char check;

    while(true)
    {
        cout << "\nwant to insert an element? [y/n]:  "; cin >>check;
        if (check == 'n' || check == 'N') break;

        cout << "enter:  "; cin >>x;

        q.enque(x);
        cout << "Queue:  "; q.print();
    }

    return 0;
}
