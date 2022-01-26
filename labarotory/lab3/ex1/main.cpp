

#include <iostream>
#include "bounded_lib.h"

using namespace std;


int main()
{

    Stack s(5);
    cout << "Is stack Empty now? : "; s.empty() == true? cout << " YES \n" : cout << "NO" << endl;

    s.push(7);
    s.push(5);
    s.push(9);


    cout << "\nOur stack now: \n";
    s.print();

    cout << "\n\nRemove current topmost elements from stack -> Pop: " << s.pop() << endl;

    cout << "\nWhat is on topmost right now? : " << s.top();

    cout << "\nOur stack now: \n";
    s.print();

    cout << "\n\nIs stack Empty now? : "; s.empty() == true? cout << " YES \n" : cout << "NO" << endl;

    float x;
    char choice;
    do {
        cout << "\nInsert an element: "; cin >> x;
        s.push(x);
        cout << "\nWhat is current number of elements on stack: " << s.size() << endl;

        cout << "\nOur stack now: \n";
        s.print();
        cout << "\n\nDo you want to continue? [y/n]: "; cin >> choice;

    }
    while (choice == 'y' || choice == 'Y');

    //s.clear();
    cout << "\nOur stack now: \n";
    s.print();

    Stack s1(s);
    cout << "\nOur stack now: ";
    s1.print();

    s1.push(3.14);

    Stack s2(8);
    s2.push(-5);
    s2.push(3);
    s2.push(12);
    s2.push(1);
    s2.push(-9);

    cout << "\n\nOur stack s2 now: ";
    s2.print();

    s2 = s1;

    if ( s2 == s1 )
        cout << "\n\ns2 is correctly assigned to s1 and EQUAL to s1 " << endl;

    cout << "\ns2 after assignment s2 = s1 : ";
    s2.print();

    return 0;
}
