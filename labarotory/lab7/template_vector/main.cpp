
#include <iostream>
#include "template_vector_lib.h"
using namespace std;

template<typename T>
void print(Vector<T> &o)
{
    if(o.size() > 0 )
    {
        for (int i=0; i<o.size(); ++i)
        {
            cout << o[i] << " ";
        }
        cout << endl;
    }
    else
        cout << "EMPTY!!!" << endl;
}

int main()
{
    Vector<double> bee;
    double x;
    char choice;
    while(true)
    {
        cout << "\nEnter? [y/n]:  ";
        cin >> choice;
        if ( choice == 'n' ) break;

        cout << "Enter:  ";
        cin >> x;
        bee.push_back(x);
        cout << "\nvector: " ;
        print(bee);
        cout << "last element:  " << bee.back() << endl;
    }

    while(true)
    {
        cout << "\nremove the last? [y/n]:  ";
        cin >> choice;
        if ( choice == 'n' ) break;

        bee.pop_back();
        cout << "\nvector now: " ;
        print(bee);
        cout << "first element:  " << bee.front() << endl;
    }

//        bee.clear();
//        cout << "bee:  "; print(bee);

        bee.pop_back();
        cout << "First: " << bee.front() << endl; //1
        cout << "Last: " << bee.back() << endl; //4
        cout << "Size: " << bee.size() << endl; //4
        print(bee); //1 2 3 4

        Vector<double> v2 = bee;

        cout << "\nv2:  "; print(v2); //1 2 3 4
        v2.push_back(3.14);
        v2.push_back(2.2);
        v2.push_back(5.5);
        cout << "\nv2 now:  ";print(v2); //1 2 3 4 6

        bee = v2;

        if(bee == v2)
            cout << "The vectors are equal." << endl; //yes

        bee.pop_back();
        cout << "Last: " << bee.back() <<endl; //3
        cout << "\nbee:  "; print(bee); //1 2 3
        cout << "\nv2:  ";print(v2); //1 2 3 4 6

        v2.clear();
        cout << "\n\nbee:  "; print(bee); //1 2 3
        cout << "v2:  "; print(v2); //empty

    return 0;
}
