/// main!

#include <iostream>
#include "unbounded_stack.h"

using namespace std;


int  main()
{

    Stack ints;
    int x;
    char check;

    while(true)
    {
        cout << "\nwant to insert an element? [y/n]:  "; cin >> check;
        if (check == 'n' || check == 'N') break;

        cout << "Enter:  "; cin >> x;
        ints.push(x);
        cout << "\n\tStack now:  "; ints.print();
        cout << "top:  " << ints.top() << endl;
    }

    while(true)
    {
        cout << "\nwant to remove the first (topmost)? [y/n]:  "; cin >> check;
        if (check == 'n' || check == 'N') break;

        cout << "\nPop the first :  " << ints.pop() << endl;
        cout << "\n\tStack now:  "; ints.print();
        cout << "number of elements:  " << ints.size() << endl;
    }

    cout << "\n\nStack is empty? "; ints.empty() == true? cout << "yes \n" : cout << "no " << endl;
    ints.smth();

//    cout << "\n\n\t ints.clear() \n"; ints.clear();
//    cout << "\n\tStack now:  "; ints.print();
    return 0;
}
