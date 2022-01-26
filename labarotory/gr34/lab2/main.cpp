#include <iostream>
using namespace std;
#include "lib_frac.h"

int main ()
{
    Fraction f;
    f.setNum(3);
    f.setDenom(4);

    f.print();

    Fraction f1(-2, -3);
    Fraction f2(7);

    f1.print();
    f2.print();

    f1.getDenom(10);
    f1.print();

    if (f1 == f2) /// operator ==
    {
        f1.print(); cout << " is equal to "; f2.print();
        cout << endl;
    }
}
