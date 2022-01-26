// main!

#include <iostream>
#include "linked_list_lib.h"

using namespace std;



int main()
{
    Queue q;

    float x;
    char check;
    while(true)
    {
        cout << "\nwant to insert an element? [y/n]:  "; cin >> check;
        if (check == 'n') break;

        cout << "Enter:  "; cin >>x;
        q.enque(x);
        cout << "Queue now:   "; q.print();
        cout << "last element:  " << q.back() << endl;
        cout << "number of elements:  " << q.size() << endl << endl;
    }


    while(true)
    {
        cout << "\nwant to delete an element? [y/n]:  "; cin >> check;
        if (check == 'n') break;

        cout << "Deque first:  " << q.deque() << endl;
        cout << "Queue now:   "; q.print();
        cout << "first element:  " << q.front() << endl << endl;
        cout << "number of elements:  " << q.size() << endl << endl;
    }

//    cout << "\n\n\t q.clear() \n"; q.clear();
//    cout << "Queue now:   "; q.print();

    Queue q2(q);
    cout << "\n\n Queue q2 now:  "; q2.print();
    cout << "number of elements:  " << q2.size() << endl;
    cout << "first element:  " << q2.front() << endl;
    cout << "last element:  " << q2.back() << endl;

    q2.enque(13);
    q2.enque(3.14);
    q2.enque(7.5);

    cout << "\n\n Queue q2 now:  "; q2.print();

    q2 = q;
    cout << "\n\n\t q2 = q \n";
    cout << "\n\n Queue q2 now:  "; q2.print();
    cout << "\n\n Queue q now:  "; q.print();
    return 0;
}



