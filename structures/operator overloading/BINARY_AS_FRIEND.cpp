#include <iostream>
using namespace std;

class Vektor
{

    double x;
    double y;
public:
    Vektor(double _x=0, double _y=0)
    {
        x = _x;    ///constructor
        y = _y;
    }

    double getx() const
    {
        return x;  ///getter, selector

    }

    double gety() const
    {
        return y;
    }

    /// operator overloading
    friend Vektor operator + (const Vektor &v1, const Vektor &v2);
};

Vektor operator + (const Vektor &v1, const Vektor &v2)
{
    return Vektor(v1.x + v2.x, v1.y + v2.y);
}

int main()
{
    Vektor v1(-10, 5), v2 = {15, -8}, v3;

    v3 = v1 + v2; v3 = v1 + 2;
    v3 = 2 + v1;  /// this is call is possible because of friend function operator overloading

    cout << v3.getx() << "  " << v3.gety() << endl;
    return 0;
}
