
#include <iostream>
#include "bounded_stack.h"
using namespace std;


int main()
{


    Stack s1(5);
    cout << "IS stack empty now? -> ";
    s1.empty() == true? cout << "Yes\n" : cout << "NO" << endl;
    cout << "Is stack FULL now? -> ";
    s1.full() == true? cout << "YES\n" : cout << "NO" << endl;
    cout << "trying to top when empty: " << s1.top() << endl;

    s1.push(2.3);
    s1.push(5.8);
    s1.push(7.5);
    s1.push(3.14);
    s1.push(2.46);

    cout << "OUR stack ...\n";
    s1.print();
    cout << "What is topmost value now: " << s1.top() << endl;
    //cout << "\nTrying to push into full stack: "; s1.push(1.42);

    cout << "\nPop current topmost: " << s1.pop() << endl;

    cout << "\nNow our stack ...\n";
    s1.print();

    cout << "What is topmost value now: " << s1.top() << endl;

    s1.push(9.5);

    cout << "OUR stack ...\n";
    s1.print();
    return 0;
}
