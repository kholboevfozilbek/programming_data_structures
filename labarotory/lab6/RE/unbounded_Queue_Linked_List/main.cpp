

#include <iostream>
#include "library.h"
#include <stdlib.h>
using namespace std;



int main()
{
    Queue uq;
    uq.enque(7);
    uq.enque(9);
    uq.enque(5);
    uq.enque(3);
    uq.enque(11);
    uq.enque(2);

    cout << "\n\nQueue:  "; uq.print();
    cout << "Size:  " << uq.size() << endl;
    cout << "First: " << uq.front() << endl;
    cout << "Last:  " << uq.back() << endl;

    cout << "Remove topmost:  " << uq.dequeue() << endl;
    cout << "Size:  " << uq.size() << endl;
    cout << "Queue:  "; uq.print();
    cout << "First: " << uq.front() << endl;
    cout << "Last:  " << uq.back() << endl;

//    uq.clear();
//    uq.print();

    system("CLS");

    Queue q1(uq);

    cout << "Queue q1: "; q1.print();
    cout << "Size:  " << q1.size() << endl;
    cout << "First: " << q1.front() << endl;
    cout << "Last:  " << q1.back() << endl;

    cout << "Pop:  " << q1.dequeue() << endl;
    cout << "Pop:  " << q1.dequeue() << endl;

    cout << "Queue q1: "; q1.print();
    cout << "Queue uq: "; uq.print();

    uq.enque(7);
    uq.enque(13);

    cout << "Queue uq: "; uq.print();

    uq = q1;
    if (uq == q1)
        cout << "\nQueues are equal " << endl;
    cout << "Queue q1: "; q1.print();
    cout << "Queue uq: "; uq.print();

    cout << "uq pop: " << uq.dequeue() << endl;
    q1.enque(713);
    cout << "Queue q1: "; q1.print();
    cout << "Queue uq: "; uq.print();

    q1.clear();

    cout << "Queue q1: "; q1.print();
    cout << "Queue uq: "; uq.print();

    return 0;
}
