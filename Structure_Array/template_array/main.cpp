

#include <iostream>
#include "template_array_lib.h"

using namespace std;

template<typename T>
void print(Array<T> &o, int length)
{
    if ( length > 0 )
    {
        for (int i=0; i<length; ++i)
            cout << o[i] << "  ";

        cout << endl;
    }
    else
        cout << " EMPTY!!! " << endl;
}

int main()
{
    Array<double> ints(5);
    ints[0] = 3.1456;
    ints[1] = 6.321;
    ints[2] = 2.12 ;

    print(ints, 3);



}

