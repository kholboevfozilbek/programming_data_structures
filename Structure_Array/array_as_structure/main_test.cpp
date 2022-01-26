

#include <iostream>
#include "array_lib.h"

using namespace std;


int main()
{
    Array t(5);

    for (int i=0; i<5; ++i)
    {
        cout << "Enter elements:  "; cin >> t[i];
    }

    cout << "\n\nArray elements:  ";
    for (int i=0; i<5; ++i)
    {
        cout << t[i]  << "  ";
    }
}
