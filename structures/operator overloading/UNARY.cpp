#include <iostream>

using namespace std;

class Vektor
{
    double x;
    double y;
public:
    Vektor(double _x=0, double _y=0)
    {
        x = _x;
        y = _y;
    }

    double getx() const
    {
        return x;
    }

    double gety() const
    {
        return y;
    }

    /// operator overloading
    Vektor operator - () const
    {
        return Vektor(-x, -y);
    }
};

int main()
{
    Vektor v1(6, 4), v2 = {10, -5} , v3, v4;

    v3 = -v1;

    cout << v1.getx() << " " <<  v1.gety() << endl;
    cout << v3.getx() << " " << v3.gety()<< endl;

    v3 = -v2;
     cout << v3.getx() << " " << v3.gety()<< endl;

    v4 = v3.operator-(); /// you can also call like this

    cout << v4.getx() << " " << v4.gety()<< endl;
    return 0;
}
