#include <iostream>
#include <string>
#include "Vektor_Class.h"

///unary operators without parameter and
/// It should be const because we make sure our previous object's data should remain same

using namespace std;

/*class Vektor
{
private:
    double x, y;

public:

    Vektor(double _x = 0, double _y = 0)
    {
        x = _x;
        y = _y;
    }

    void print()
    {
        cout << x << ",  " << y << endl;
    }
};*/

Vektor::Vektor operator-() const
    {
        return Vektor(-x, -y);
    }

int main()
{
    Vektor v1(-3, 7);
    //Vektor v2(-v1); this and one below is the same;
    Vektor v2 = -v1;
    v2 = v1.operator- ();

    v2.print();

    /// value of previous vektor isnt changed thanks to that const keyword which make this function read only
    /// read only which only can see the data but not modify it
    cout << "\nValue of the previous vektor v1 is not changed \n:";
    v1.print();
    return 0;
}
