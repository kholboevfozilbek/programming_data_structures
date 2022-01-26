

#include <iostream>
#include "Descending_List.h"

using namespace std;

int main()
{
    Sorted_List<int> s1;
    s1.push(12);
    s1.push(3);
    s1.push(7);
    s1.push(13);
    s1.push(5);

    cout << "List:  "; s1.print();

    int x;
    char ch;
    while(true)
    {
        cout << "\nEnter? [y/n]:  "; cin >> ch;
        if ( ch == 'n') break;

        cout << "Enter:  "; cin >>x;
        s1.push(x);
        cout << "\nList:  "; s1.print();
        cout << "size:  " << s1.size() << endl;
    }

    cout << "\n\nElement to be searched : "; cin >> x;

    cout << "there are " << s1.count(x) << " elements in the List " << endl;


    while(true)
    {
        cout << "\Remove the greatest? [y/n]:  "; cin >> ch;
        if ( ch == 'n') break;

        s1.pop();
        cout << "\nList:  "; s1.print();
    }

    cout << "\n\nSortedList<int> s2 = s1; " << endl;
    Sorted_List<int> s2 = s1;

    cout << "List s2:  ";
    s2.print(); //3 3 2 1
    s2.push(2);
    s2.push(100);
    s2.push(11);
    s2.print(); //3 3 2 2 1
    cout << "\nList:  "; s1.print();

    s1 = s2;

    if(s1 == s2)
        cout << "\n\nThe lists are equal." << endl; //yes
    cout << "\nList s1:  "; s1.print();
    cout << "\nList s2:  "; s2.print();

    s1.pop();
    s1.print(); //3 2 2 1
    s2.print(); //3 3 2 2 1

    s2.clear();
    s1.print(); //3 2 2 1
    s2.print(); //empty

    return 0;
}
