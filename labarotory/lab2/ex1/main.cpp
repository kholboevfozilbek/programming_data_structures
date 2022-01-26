
#include <iostream>
#include "frac_lib.h"

using namespace std;

int main()
{

    Fraction f;
    f.setNum(3);
    f.setDenom(4);

    f.print(); cout << endl;

    Fraction f1(2, 3);  /// 2/3
    Fraction f2(5, 4);     /// 7/1 (1 is given automatically even if you didnt give it -> it is by default

    f1.print(); cout << endl;
    f2.print(); cout << endl;

    f1.print(); cout << endl;

    Fraction f3 = f1 + f2; /// call of our defined operator +
    cout << "\n"; f1.print(); cout << " + "; f2.print(); cout << " = "; f3.print(); cout << endl;

    f1.set_OBj(20, 6);  //f1.setNum(20); f1.setDenom(6);
    f2.set_OBj(14, 5); //f2.setNum(14); f2.setDenom(5);

    Fraction f4 = f1 - f2; /// call of our defined operator -
    cout << "\n"; f1.print(); cout << " - "; f2.print(); cout << " = "; f4.print(); cout << endl;

    f1.set_OBj(2, 3); f2.set_OBj(5, 4); /// call of our defined operator *
    Fraction f5 = f1 * f2;
    cout << "\n"; f1.print(); cout << " * "; f2.print(); cout << " = "; f5.print(); cout << endl;

    f1.set_OBj(4, 3); f2.set_OBj(2, 5);
    Fraction f6 = f1 / f2;
    cout << "\n"; f1.print(); cout << " / "; f2.print(); cout << " = "; f6.print(); cout << endl;

    f1.set_OBj(20, 10); f2.set_OBj(10, 5);

    ///comparison operator
    if ( f1 == f2 )
    {
        cout << "\n"; f1.print(); cout << " == "; f2.print(); cout << " the two fractions ARE equal "<< endl;
    }
    else
    {
        cout << "\n"; f1.print(); cout << " is NOT equal to "; f2.print(); cout << endl;
    }

    f1.set_OBj(4, 3); f2.set_OBj(2, 5);
    if ( f1 != f2)
    {
        cout <<"\n"; f1.print(); cout << " != "; f2.print(); cout << "The two function are NOT equal " << endl;
    }
    else
    {
        cout <<"\n"; f1.print(); cout << " IS EQUAL TO "; f2.print(); cout << endl;
    }

    if( f1 > f2 ) /// f1 is greater than f2
    {
        cout << "\n"; f1.print(); cout << " > "; f2.print(); cout << endl;
    }
    else
    {
        cout << "\n"; f1.print(); cout << " IS NOT GREATER THAN "; f2.print(); cout << endl;
    }

    f1.set_OBj(2, 3); f2.set_OBj(5, 4);
    if ( f1 < f2 ) /// f1 is less than f2
    {
        cout << "\n"; f1.print(); cout << " < "; f2.print(); cout << endl;
    }
    else
    {
        cout << "\n"; f1.print(); cout << " IS NOT LESS THAN  "; f2.print(); cout << endl;
    }

    /// >= it means f1 (4, 3) is greater than f2 (2, 5) ALSO it can be equal it is also included in operator overloading

    f1.set_OBj(20, 10); f2.set_OBj(10, 5);
    if ( f1 >= f2 )
    {
        cout << "\n"; f1.print(); cout << " >= "; f2.print(); cout << endl;
    }
    else
    {
        cout << "\n"; f1.print(); cout << " IS NOT GREATER OR EQUAL TO  "; f2.print(); cout << "\nLogically less than!" << endl;
    }

    /// <= means frac (2, 5) is less than (or equal to ) frac (4, 3), Fractions can also be equal 20/10 and 10/5 is also included in operator overloading
    f1.set_OBj(2, 3); f2.set_OBj(5, 4);
    if ( f1 <= f2)
    {
        cout << "\n"; f1.print(); cout << " <= "; f2.print(); cout << endl;
    }
    else
    {
        cout << "\n"; f1.print(); cout << " IS NOT LESS THAN OR EQUAL TO "; f2.print(); cout << "\nLogically bigger than "<< endl;
    }

    return 0;
}
