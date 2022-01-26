// main!

#include <iostream>
#include "generic_vector.h"

using namespace std;

template<typename  T>
void print(Vector<T> &o)
{
    if ( o.size() > 0 )
    {
        for (int i=0; i<o.size(); ++i)
        {
            cout << o[i] << " ";
        }
        cout << endl;

    }
    else
        cout << " EMPTY!!! " << endl;
}

int main()
{
    Vector<char>  v1;

    cout << "\nvector is empty?  "; v1.empty() == true? cout << "yes \n" : cout << "No " << endl;
    v1.push_back('A');
    v1.push_back('B');
    v1.push_back('C');
    print(v1);

    cout << "Pop_back:  "; v1.pop_back();
    cout << "\nvector now:  "; print(v1);

    cout << "\nvector is empty?  "; v1.empty() == true? cout << "yes \n" : cout << "No " << endl;


    cout << "First: " << v1.front() << endl; //1
    cout << "Last: " << v1.back() << endl; //4
    cout << "Size: " << v1.size() << endl; //4
    cout << "\nv1:  "; print(v1);

    cout << "\n\n\tVector v2 = v1\n"; Vector<char> v2(v1);

    cout << "v2:  "; print(v2); //1 2 3 4
    cout << "\n\n\tv2: ";
    v2.push_back('D');
    v2.push_back('E');
    v2.push_back('F');
    print(v2);
    return 0;
}
