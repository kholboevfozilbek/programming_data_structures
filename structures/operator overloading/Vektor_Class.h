
#include <iostream>
using namespace std;


class Vektor
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
};
