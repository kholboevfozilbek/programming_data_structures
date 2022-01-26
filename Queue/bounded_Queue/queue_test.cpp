/// main

#include <iostream>
#include "bounded_Queue.h"
using namespace std;


int main()
{
    Queue q(7);
    q.enque(7);
    q.enque(5);
    q.enque(9);
    q.enque(-4);
    q.enque(1);

    cout << "\nQueue now: "; q.print();

    cout << "\nSize:  " << q.size() << endl;
    cout << "\nDeque:  " << q.deque() << endl;
    cout << "Size now:  " << q.size() << endl;
    cout << "\nFirst:  " << q.front() << endl;
    cout << "Queue now: "; q.print();

    cout << "\nLast:  " << q.back() << endl;

    cout << "\nQueue q now: "; q.print();

    Queue q2(q);

    cout << "\n\nQueue q2: "; q.print();
    cout << "\nSize:  " << q.size() << endl;
    cout << "First:  " << q.front() << endl;
    cout << "Last:  " << q.back() << endl;

    q2.enque(6);
    cout << "\n\nDeque q2:  " << q2.deque() << endl;
    cout << "Deque q2:  " << q2.deque() << endl;

    q2.enque(3);
    q2.enque(2);
    q2.enque(13);
    q2.enque(23);

    cout << "\n\nQueue q2: "; q2.print();
    cout << "\nSize:  " << q2.size() << endl;
    cout << "First:  " << q2.front() << endl;
    cout << "Last:  " << q2.back() << endl;


    q = q2;

    if ( q == q2 )
    {
        cout << "q = q2, successful assignment operator, and comparison operator!" << endl;
    }

    cout << "\n\nDeque q:   " << q.deque() << endl;
    cout << "\nQueue q:  ";
    q.print();
    cout << "\nQueue q2:  "; q2.print();


    cout << endl;
    return 0;
}
