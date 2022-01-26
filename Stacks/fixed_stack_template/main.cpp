
#include <iostream>
#include <string>
#include "fixed_stack_template_lib.h"

using namespace std;

int main()
{
    Stack<string> IELTS;

    string x;
    char choice;
    while(true)
    {
        cout << "\nEnter?  [y/n]:  "; cin >> choice;
        if ( choice == 'n') break;

        cout  << "Enter:  "; cin >> x;
        IELTS.push(x);
        cout << "\n\nIELTS now:  \n"; print(IELTS);
        cout << "number of elements: " << IELTS.size() << endl;
        cout << "\ntopmost element now:  " << IELTS.top() << endl;
    }
/*
    while(true)
    {
        cout << "\Remove topmost?  [y/n]:  "; cin >> choice;
        if ( choice == 'n') break;

        cout << "\n\nRemoved topmost element:  " << IELTS.pop();
        cout << "\nIELTS now:  \n"; print(IELTS);
    }
*/
    Stack<string> s2(IELTS);

    cout << "\n\n\tcopy-constructor is called for s2 \n";
    cout << "\ns2: \n"; print(s2);
    s2.push("Mathematics");
    s2.push("Phisics");
    cout << " \n\nS2 now:  \n"; print(s2);

    IELTS = s2;

    if ( IELTS== s2 )
        cout << "\n\nStacks are equal " << endl;

    cout << "\n\ns1:  "; print(IELTS);
    cout << "\ns2:  "; print(s2);

    cout << "\n\n\nPop s1: " << IELTS.pop() << endl;
    cout << "\n\ns1:  "; print(IELTS);
    cout << "\ns2:  "; print(s2);

    s2.clear();
    cout << "\n\ns1:  "; print(IELTS);
    cout << "\ns2:  "; print(s2);

    return 0;
}
