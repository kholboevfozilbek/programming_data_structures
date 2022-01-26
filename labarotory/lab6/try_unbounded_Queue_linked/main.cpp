//main!

#include <iostream>
#include "unbounded_linked_lib.h"

using namespace std;


int main()
{
    Queue q;

    cout << "\nQueue is really EMPTY? -> "; q.empty() == true? cout << "yes\n" : cout << "no" << endl;
    double x;
    char check;
    while(true)
    {
        cout << "\nWant to insert item? [y/n]:  "; cin >>check;
        if (check == 'n') break;

        cout << "Enter:  "; cin>>x;
        q.enque(x);
        cout << "\nQueue now:  "; q.print();
        cout << "last:  " << q.back() << endl;
        cout << "elements: " << q.size() << endl;
    }
    cout << "\n\nQueue is really EMPTY? -> "; q.empty() == true? cout << "yes\n" : cout << "no" << endl;
/*
    while(true)
    {
        cout << "\nWant to delete item? [y/n]:  "; cin >>check;
        if (check == 'n') break;

        cout << "Deque first element:  " << q.deque() << endl;
        cout << "\nQueue now:  "; q.print();
        cout << "first:  " << q.front() << endl;
        cout << "elements: " << q.size() << endl;
    }  */

    cout << "\n\nQueue q: "; q.print();
    //cout << "\nq.clear \n"; q.clear();
    cout << "\n\nQueue q: "; q.print();
    cout << "\n\nQueue is really EMPTY? -> "; q.empty() == true? cout << "yes\n" : cout << "no" << endl;

    //Queue q2(q); q2.print();
    return 0;
}
