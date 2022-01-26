

#include <iostream>
#include "vector_container.h"
using namespace std;

void print(Vector &o)
{
    if (o.size() > 0 )
    {
        for (int i=0; i<o.size(); ++i)
        {
            cout << o[i] << " ";
        }
    cout << endl;
    }
    else
        cout << "Empty " << endl;
}

int main()
{
    Vector salary;

    int x;
    char choice;
    while(true)
    {
        cout << "\nEnter? [y/n]:  "; cin >> choice;
        if ( choice == 'n' ) break;

        cout << "Enter:  "; cin >> x;
        salary.push_back(x);
        cout << "\nvector: " ;print(salary);
        cout << "last element:  " << salary.back() << endl;
    }

    while(true)
    {
        cout << "\nremove the last? [y/n]:  "; cin >> choice;
        if ( choice == 'n' ) break;

        salary.pop_back();
        cout << "\nvector now: " ;print(salary);
        cout << "first element:  " << salary.front() << endl;
    }

//    salary.clear();
//    cout << "salary:  "; print(salary);

    salary.pop_back();
    cout << "First: " << salary.front() << endl; //1
    cout << "Last: " << salary.back() << endl; //4
    cout << "Size: " << salary.size() << endl; //4
    print(salary); //1 2 3 4

    Vector v2 = salary;

    cout << "\nv2:  "; print(v2); //1 2 3 4
    v2.push_back(6);
    cout << "\nv2 now:  ";print(v2); //1 2 3 4 6

    salary = v2;

    if(salary == v2)
        cout << "The vectors are equal." << endl; //yes

    salary.pop_back();
    cout << "Last: " << salary.back() <<endl; //3
    print(salary); //1 2 3
    print(v2); //1 2 3 4 6

    v2.clear();
    print(salary); //1 2 3
    print(v2); //empty

    return 0;
}
