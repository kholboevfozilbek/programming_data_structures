#include <iostream>
#include "double_linked_list.h"

using namespace std;


int main()
{
    DEQueue q1;

    q1.push_back(1);
    q1.push_back(2);
    q1.push_back(3);
    q1.push_front(4);
    q1.push_front(5);
    q1.print(); //5 4 1 2 3

    cout << "\nFirst: " << q1.front() << endl; //5
    cout << "Last: " << q1.back() << endl; //3
    cout << "Size: " << q1.size() << endl; //5
    cout << "\nq1.pop_back() \n"; q1.pop_back();
    cout << "\nFirst: " << q1.front() << endl; //5
    cout << "Last: " << q1.back() << endl; //2
    cout << "Size: " << q1.size() << endl; //4
    q1.print();
    cout << "\nq1.pop_front() \n"; q1.pop_front();
    cout << "\nFirst: " << q1.front() << endl; //4
    cout << "Last: " << q1.back() << endl; //2
    cout << "Size: " << q1.size() << endl; //3
    q1.print();

    cout << "\n\nDEQueue q2 = q1; " << endl; DEQueue q2 = q1;
    cout << "\nq2: "; q2.print();
    cout << "\nq1: "; q1.print();
    //4 1 2

    q2.push_back(6);
    q2.push_back(7);
    q2.push_back(13);
    q2.push_front(-7);
    //4 1 2 6
    cout << "\n\nq2: "; q2.print();
    cout << "First: " << q2.front() << endl; //4
    cout << "Last: " << q2.back() << endl; //6
    cout << "Size: " << q2.size() << endl; //4

    q1 = q2;

    if(q1 == q2)
        cout << "\n\nThe queues are equal." << endl; //yes

    cout << "q2: "; q2.print();
    cout << "\nq1: "; q1.print();
    q1.pop_front();
    //1 2 6
    cout << "\n\nFirst: " << q1.front() << endl; //1
    cout << "Last: " << q1.back() << endl; //6
    cout << "Size: " << q1.size() << endl; //3
    cout << "First: " << q2.front() << endl; //4
    cout << "Last: " << q2.back() << endl; //6
    cout << "Size: " << q2.size() << endl; //4

    cout << "\n\nq2.clear() \n"; q2.clear();

    cout << "q1: "; q1.print();
    cout << "First: " << q1.front() << endl; //1
    cout << "Last: " << q1.back() << endl; //6
    cout << "Size: " << q1.size() << endl; //3

    cout << "\nq2: "; q2.print();
    cout << "Size: " << q2.size() << endl; //0

    return 0;
}



