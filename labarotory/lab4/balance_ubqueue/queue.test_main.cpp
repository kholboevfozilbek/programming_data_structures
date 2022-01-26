/// main!

#include <iostream>
#include "balance_lib.h"

using namespace std;


int main()
{
    Ubqueue q;

    int x;
    char check;
    while(true)
    {
        cout << "\nWant to add element to queue? [y/n]:  "; cin >> check;
        if (check == 'n' || check == 'N') break;

        cout << "Enter:  "; cin >> x;
        q.enque(x);
        cout << "\nQueue now:  "; q.print();
        cout << "capacity -> " << q.curr_capacity() << endl;
        cout << "index_front -> " << q.index_front() << endl;
        cout << "index_back -> " << q.index_back() << endl;
        cout << "front   ->  " << q.front() << endl;
        cout << "back    ->  " << q.back() << endl;
    }

//    while(true)
//    {
//        cout << "\nWant to remove element from queue? [y/n]:  "; cin >> check;
//        if (check == 'n' || check == 'N') break;
//
//        cout << "\nDeque the first:  " << q.deque() << endl;
//        cout << "\nQueue now:  "; q.print();
//        cout << "index_front -> " << q.index_front() << endl;
//        cout << "index_back -> " << q.index_back() << endl;
//    }
//
//    while(true)
//    {
//        cout << "\nWant to add element to queue? [y/n]:  "; cin >> check;
//        if (check == 'n' || check == 'N') break;
//
//        cout << "Enter:  "; cin >> x;
//        q.enque(x);
//        cout << "\nQueue now:  "; q.print();
//        cout << "capacity -> " << q.curr_capacity() << endl;
//        cout << "index_front -> " << q.index_front() << endl;
//        cout << "index_back -> " << q.index_back() << endl;
//        cout << "front   ->  " << q.front() << endl;
//        cout << "back    ->  " << q.back() << endl;
//    }

    Ubqueue q2 = q;
    cout << "\n\n\tUbqueue q2 (q) \n";
    cout << "\nQueue now:  "; q2.print();

    q2.enque(99);
    q2.enque(999);
    q2.enque(9999);
    cout << "\nQueue now:  "; q2.print();

    cout << "\n\n q2 = q \n"; q2 = q;

    cout << "\n\n Queue q = "; q.print();
    cout << "Queue q2 = ";  q2.print();

    if ( q2 == q )
        cout << "\n\n\t q2 = q " << endl;

    return 0;
}
