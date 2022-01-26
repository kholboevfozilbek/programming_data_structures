
#include <iostream>
#include "Sorted_List_template.h"

using namespace std;


int main()
{
    Sorted_list<int> s1;
    cout << "List is empty? " << s1.empty() << endl;
    int x;
    char ch;
    while(true)
    {
        cout << "\nenter? [y/n]:  "; cin >> ch;
        if ( ch == 'n') break;

        cout << "Enter:  "; cin >> x;

        s1.push(x);
        cout << "\nList:  "; s1.print();
        cout << "Size: " << s1.size() << endl;

    }

    cout << "\n\nEnter to search:  "; cin >>x;

    cout << "in the list " << s1.count(x) << " matches with your number " << endl;

    while(true)
    {
        cout << "\Remove the greatest? [y/n]:  "; cin >> ch;
        if ( ch == 'n') break;

        s1.pop();
        cout << "\nList:  "; s1.print();
        cout << "Top:  " << s1.top() << endl;
    }


    cout << "\n\nSorted_list<int> s2 = s1; " << endl;
    Sorted_list<int> s2 = s1;

    cout << "List s2: "; s2.print(); //3 3 2 1
    s2.push(2);
    s2.push(15);
    s2.push(0);
    cout << "\nList s2 now: "; s2.print(); //3 3 2 2 1
    cout << "\nList s1 now: "; s1.print(); //3 3 2 2 1



    s1 = s2;

    if(s1 == s2)
        cout << "\n\nThe lists are equal." << endl; //yes

    cout << "\nList s2 now: "; s2.print(); //3 3 2 2 1
    cout << "\nList s1 now: "; s1.print(); //3 3 2 2
    s1.pop();
    s1.print(); //3 2 2 1
    s2.print(); //3 3 2 2 1

    s2.clear();
    s1.print(); //3 2 2 1
    s2.print(); //empty
    cout << "\nList is empty? " << s1.empty() << endl;

    return 0;
    return 0;
}
