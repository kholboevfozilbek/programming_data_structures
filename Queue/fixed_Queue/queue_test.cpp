/// main!

#include <iostream>
#include <stdexcept>
#include "fixed_Queue.h"
using namespace std;

int main()
{
    Queue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.enque(5);

    cout << "\nOur Queue now:  "; q.print();
    cout << "\nSize of Queue:  " << q.size();
    cout << "\nThe first element: ->front = " << q.front() << endl;
    cout << "Last element:  " << q.back() << endl;

    cout << "\nRemove the first: deque: " << q.deque() << endl;
    cout << "\nOur Queue now:  "; q.print();
    cout << "Size of Queue now:  " << q.size() << endl;
    cout << "First:  " << q.front() << endl;
    cout << "Last element:  " << q.back() << endl;


    cout << "\n\nQueue:  "; q.print();

    Queue q2(q); // Queue q2 = q;

    cout << "\n\nq2 queue :  "; q2.print();

    q2.enque(6);
    q2.enque(-4);
    cout << "\n\nq2 queue :  "; q2.print();
    cout << "\n\nq Queue: "; q.print();

    q = q2;

    if ( q == q2 )
        cout << "\n\nq == q2. Successful = and == " << endl;

    cout << "\nq queue -> "; q.print();
    cout << "\nq2 queue -> "; q2.print();

    cout << "\n\nDeque from q: " << q.deque() << endl;
    cout << "\nq queue -> "; q.print();
    cout << "\nq2 queue -> "; q2.print();

    q2.clear(); cout << endl;

    cout << "\nq queue -> "; q.print();
    cout << "\nq2 queue -> "; q2.print();


    cout << endl;
    return 0;
}
