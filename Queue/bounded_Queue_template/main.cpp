
#include <iostream>
#include "template_Queue.h"

using namespace std;


int main()
{
    //Queue q1;
    Queue<int, 7> q1;

    q1.enque(1);
    q1.enque(2);
    q1.enque(3);
    q1.enque(4);
    q1.enque(5);

    q1.print(); //1 2 3 4 5
    cout << "Size: " << q1._size() << endl; //5
    cout << "Pop: " << q1.deque() << endl; //1
    cout << "Size: " << q1._size() << endl; //4
    cout << "First: " << q1.front() << endl; //2
    cout << "Last: " << q1.back() << endl; //5
    q1.print(); //2 3 4 5

    cout << "Queue q2 = q1; " << endl;
    Queue<int, 7> q2(q1);

    q2.print(); //2 3 4 5
    q2.enque(6);
    q2.print(); //2 3 4 5 6

    cout << "q1 = q2; " << endl;
    q1 = q2;

    if(q1 == q2)
        cout << "The queues are equal." << endl; //yes

    cout << "\n\nPop: " << q1.deque() <<endl; //2
    cout << "q1.print(); "; q1.print(); //3 4 5 6
    cout << "q2.print(); ";q2.print(); //2 3 4 5 6

    cout << "q2.clear(); "; q2.clear();
    cout << "q1.print(); "; q1.print(); //3 4 5 6
    cout << "q2.print(); ";q2.print(); //2 3 4 5 6

    return 0;
}
