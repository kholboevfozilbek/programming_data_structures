
#include <iostream>
#include "unbounded_template_stack.h"
using namespace std;


int main()
{
    Stack<double> baho;

    double x;
    char choice;
    while(true)
    {
        cout << "\nEnter?  [y/n]:  "; cin >> choice;
        if ( choice == 'n') break;

        cout  << "Enter:  "; cin >> x;
        baho.push(x);
        cout << "\n\nIELTS now:  \n"; baho.print();
    }

    while(true)
    {
        cout << "\Remove topmost?  [y/n]:  "; cin >> choice;
        if ( choice == 'n') break;

        cout << "\n\nRemoved topmost element:  " << baho.pop();
        cout << "\nIELTS now:  \n"; baho.print();
    }

    Stack<double> s2(baho);

    cout << "\n\n\tcopy-constructor is called for s2 \n";
    cout << "\ns2: \n"; s2.print();
    s2.push(3.14);
    s2.push(7.999);
    s2.push(7.13);
    cout << " \n\nS2 now:  \n"; s2.print();

    baho = s2;
    cout << " \n\n baho now:  \n"; baho.print();
    cout << " \n\nS2 now:  \n"; s2.print();

    if ( baho == s2 )
        cout << "\n\nStacks are equal " << endl;

    cout << "\n\ns1:  "; baho.print();
    cout << "\ns2:  "; s2.print();

    cout << "\n\n\nPop s1: " << baho.pop() << endl;
    cout << "\n\ns1:  "; baho.print();
    cout << "\ns2:  "; s2.print();

    s2.clear();
    cout << "\n\ns1:  "; baho.print();
    cout << "\ns2:  "; s2.print();

    return 0;
}
