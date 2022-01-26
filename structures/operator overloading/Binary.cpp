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
    Vektor operator + (const Vektor &v) const
    {
        return Vektor(x + v.x, y + v.y);
    }
};

int main()
{
    Vektor v1(5, 15), v2 = {20, 40}, v3;

   cout <<  v1 + v2 << endl;

    cout << v3.getx() << " " << v3.gety()  << endl;
    Vektor v4 = v3 + 2 ;
    cout << v4.getx() << " " << v4.gety()  << endl;
    return 0;
}
