#include <iostream>
#include "template_fixed_queue.h"
//#include "unbounded_queue.h"

using namespace std;

int main()
{
    Queue<int> q1;

    q1.enque(1);
    q1.enque(2);
    q1.enque(3);
    q1.enque(4);
    q1.enque(5);

    q1.print(); //1 2 3 4 5
    cout << "Size: " << q1.size() << endl; //5
    cout << "q1.deque(); " << endl; q1.deque();
    cout << "Size: " << q1.size() << endl; //4
    cout << "First: " << q1.front() << endl; //2
    cout << "Last: " << q1.back() << endl; //5
    q1.print(); //2 3 4 5

    cout << "\n\nQueue<int> q2 = q1; " << endl;
    Queue<int> q2 = q1;

    cout << "\nq2 now: "; q2.print(); //2 3 4 5
    q2.enque(13);
    q2.enque(7);
    q2.print(); //2 3 4 5 6

    cout << "\n\nq1 = q2; " << endl;
    q1 = q2;

    if(q1 == q2)
        cout << "The queues are equal." << endl; //yes
    cout << "\nq1 now: "; q1.print(); //2 3 4 5
    cout << "\nq2 now: "; q2.print(); //2 3 4 5

    cout << "\n\nq1.deque() : ";
    q1.deque();
    cout << "\nq1 now: ";q1.print(); //3 4 5 6
    cout << "\nq2 now: "; q2.print(); //2 3 4 5 6

    cout << "q2.clear(); " << endl; q2.clear();
    cout << "\nq1 now: ";q1.print(); //3 4 5 6
    cout << "\nq2 now: "; q2.print(); //2 3 4 5 6
    return 0;
}

