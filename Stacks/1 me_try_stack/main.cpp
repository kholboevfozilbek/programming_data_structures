

#include <iostream>
#include "fixed_stack_lib.h"
using namespace std;


int main()
{
    Stack s1;

    cout << "IS stack EMPTY NOW?: ";
    s1.empty() == true? cout << " YES \n" : cout << " NO \n";


    s1.push(2);
    s1.push(5);
    s1.push(7);
    s1.push(3);
    cout << "Our stack ...\n";
    s1.print();

    cout << "IS stack EMPTY NOW?: ";
    s1.empty() == true? cout << " YES \n" : cout << " NO \n";

    cout << "\nCurrent number of elements on stack: " << s1.size() << endl;

    cout << "\nPop the topmost value:  " << s1.pop() << endl;
    cout << "Our stack ...\n";
    s1.print();
    cout << "\nRight now on the top of stack:  " << s1.top() << endl;
    cout << "Now number of elements we have:  " << s1.size() << endl;

    Stack s2 = s1;
    cout << "\n\nCopy s2 = s1 \n";
    cout << "Our s2 stack ...\n";
    s2.print();

    s2.push(6);
    cout << "\n\ns2.push(6) \n"; s2.print();

    s1 = s2;      // to check whether == operator works

    s1.print();

    if ( s1 == s2 )
        cout << "\n\nThe two stacks are equal!";
    else
        cout << "\n\nThe stacks are NOT equal!";

    s2.clear();
    cout << "\n\nOur s1 stack...\n";    s1.print();
    cout << "\nOur s2 stack...\n"; s2.print();
    cout << "\ns2 size: " << s2.size() << endl;
    return 0;
}
