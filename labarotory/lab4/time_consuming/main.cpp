//main!

#include <iostream>
#include "unbounded_lib.h"

using namespace std;

int main()
{

    Ubqueue q;

    float x;
    char check;
    while(true)
    {
        cout << "Want to insert an element? [y/n]:  ";
        cin >> check;
        if (check == 'n' || check == 'N') break;

        cout << "Enter:  ";
        cin >> x;

        q.enque(x);
        cout << "\nQueue now:  ";
        q.print();
    }

    /*int j=0;
    while(j < 4)
    {
        cout << "\n\nQueue is empty now? -> ";
        q.empty() == true? cout << " yes \n\n" : cout << " no \n\n";
        cout << "Deque:  " << q.deque() << endl;
        cout << "\nQueue now:  ";
        q.print();
        cout << "front:  " << q.front() << endl;
        cout << "back:   " << q.back() << endl;

        ++j;
    }

    while(true)
    {
        cout << "Want to insert an element? [y/n]:  ";
        cin >> check;
        if (check == 'n' || check == 'N') break;

        cout << "Enter:  ";
        cin >> x;

        q.enque(x);
        cout << "\nQueue now:  ";
        q.print();
        cout << "front:  " << q.front() << endl;
        cout << "back:   " << q.back() << endl;
        cout << "size:   " << q.size() << endl;
    }

    cout << "\nQueue now:  "; q.print();
    cout << "front:  " << q.front() << endl;
    cout << "back:   " << q.back() << endl;
    cout << "size:   " << q.size() << endl;

    cout << "\n\n q.clear() \n" << endl; q.clear(); */

    cout << "\nQueue now:  "; q.print();
    cout << "front:  " << q.front() << endl;
    cout << "back:   " << q.back() << endl;
    cout << "size:   " << q.size() << endl;

    Ubqueue q2;

    q2.enque(700);
    q2.enque(999);

    cout << "\nQueue q2 now:  "; q2.print();
    cout << "front:  " << q2.front() << endl;
    cout << "back:   " << q2.back() << endl;
    cout << "size:   " << q2.size() << endl;

    cout << "\n\n q2 = q \n" << endl;

    q2 = q;

    cout << "\nQueue q2 now:  "; q2.print();
    cout << "front:  " << q2.front() << endl;
    cout << "back:   " << q2.back() << endl;
    cout << "size:   " << q2.size() << endl;

    cout << "\nQueue q now:  "; q.print();
    cout << "front:  " << q.front() << endl;
    cout << "back:   " << q.back() << endl;
    cout << "size:   " << q.size() << endl;

    if ( q2 == q)
        cout << "\n\n q2 == q! Successful assignment and comparison operators! " << endl;
    return 0;
}
