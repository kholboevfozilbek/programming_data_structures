// main!

#include <iostream>
#include "unbounded_stack.h"

using namespace std;


int main()
{
    Stack reals;
    float x;
    char choice;

    //cout << "remove the top:  " << reals.pop();
    while(true)
    {
        cout << "\nwant to insert an element? [y/n]:   "; cin >> choice;
        if (choice == 'n') break;

        cout << "Enter:  "; cin >> x;
        reals.push(x);
        cout << "\n\tStack now:  "; reals.print();
        cout << "top element:  " << reals.top() << endl;
        cout << "number of elements:  " << reals.size() << endl;
    }

    while(true)
    {
        cout << "\nwanna remove the top element? [y/n]:  "; cin >> choice;
        if (choice == 'n') break;

        cout << "\nRemove the top:  " << reals.pop() << endl;
        cout << "\tStack now:  "; reals.print();
    }

//    cout << "\n\n\treals.clear() \n"; reals.clear();
//    cout << "\tStack now:  "; reals.print();

    cout << "\n\tStack q2 ( reals) \n"; Stack q2(reals);
    cout << "\tStack reals now:  "; reals.print();
    cout << "\tStack q2 now:  "; q2.print();

    q2.push(13);
    q2.push(123);
    q2.push(3.145);
    cout << "\tStack q2 now:  -> head " << q2.heads(); q2.print();
    cout << "\tStack reals now:  -> head " << reals.heads(); reals.print();

    cout << "\n\n\treals = q2 \n\n"; reals = q2;
    if (reals == q2)
        cout << "\n\n\t\t reals == q2. -> Successful assignment operator and comparison operator " << endl;
    cout << "\tStack q2 now:  -> head " << q2.heads(); q2.print();
    cout << "\tStack reals now:  -> head " << reals.heads(); reals.print();

    cout << "\nreals.pop:  " << reals.pop() << endl;
    cout << "\nreals.pop:  " << reals.pop() << endl;
    cout << "\tStack q2 now:  -> head " << q2.heads(); q2.print();
    cout << "\tStack reals now:  -> head " << reals.heads(); reals.print();


    return 0;
}
