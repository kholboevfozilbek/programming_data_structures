#include <iostream>
#include "Sorted_List.h"

using namespace std;

int main()
{
    Sorted_List s1;

    s1.push(3);
    s1.push(2);
    s1.push(3);
    s1.push(1);
    s1.push(4);

    s1.print(); //4 3 3 2 1
    cout << "Size: " << s1.size() << endl; //5
    cout << "Least : " << s1.top() << endl; //4
    s1.pop();
    s1.print(); //3 3 2 1
    cout << "Size: " << s1.size() << endl; //4
    cout << "Least : " << s1.top() << endl; //3

    Sorted_List s2 = s1;

    cout << "\n\nS2:  "; s2.print(); //3 3 2 1
    s2.push(2);
    s2.print(); //3 3 2 2 1

    s1 = s2;

    if(s1 == s2)
        cout << "\n\nThe lists are equal." << endl; //yes

    cout << "\ns1.pop() "; s1.pop();
    s1.print(); //3 2 2 1
    s2.print(); //3 3 2 2 1

    cout << "\n\ns2.clear(); " << endl; s2.clear();
    cout << "\nlist s1 now:   "; s1.print(); //3 2 2 1
    s2.print(); //empty

    return 0;
}
