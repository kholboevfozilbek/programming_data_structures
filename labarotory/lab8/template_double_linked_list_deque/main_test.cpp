#include <iostream>
#include "template_DEQueue.h"

using namespace std;

int main()
{
    DEQueue<int> q1;

    q1.push_back(1);
    q1.push_back(2);
    q1.push_back(3);
    q1.push_front(4);
    q1.push_front(5);
    //5 4 1 2 3

    cout << "First: " << q1.front() << endl; //5
    cout << "Last: " << q1.back() << endl; //3
    cout << "Size: " << q1.size() << endl; //5
    q1.pop_back();
    cout << "First: " << q1.front() << endl; //5
    cout << "Last: " << q1.back() << endl; //2
    cout << "Size: " << q1.size() << endl; //4
    q1.pop_front();
    cout << "First: " << q1.front() << endl; //4
    cout << "Last: " << q1.back() << endl; //2
    cout << "Size: " << q1.size() << endl; //3

    DEQueue<int> q2 = q1;
    //4 1 2

    q2.push_back(6);
    //4 1 2 6
    cout << "First: " << q2.front() << endl; //4
    cout << "Last: " << q2.back() << endl; //6
    cout << "Size: " << q2.size() << endl; //4

    q1 = q2;

    if(q1 == q2)
        cout << "The queues are equal." << endl; //yes

    q1.pop_front();
    //1 2 6
    cout << "First: " << q1.front() << endl; //1
    cout << "Last: " << q1.back() << endl; //6
    cout << "Size: " << q1.size() << endl; //3
    cout << "First: " << q2.front() << endl; //4
    cout << "Last: " << q2.back() << endl; //6
    cout << "Size: " << q2.size() << endl; //4

    q2.clear();
    cout << "First: " << q1.front() << endl; //1
    cout << "Last: " << q1.back() << endl; //6
    cout << "Size: " << q1.size() << endl; //3
    cout << "Size: " << q2.size() << endl; //0

    return 0;
}

