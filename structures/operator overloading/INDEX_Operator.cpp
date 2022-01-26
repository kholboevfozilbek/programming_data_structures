
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

    double& operator[] (int i)
    {
        if ( i == 1)
            return x;
        else
            return y;
    }
};


int main()
{
    Vektor men = {7, 10}, ular2 = {30, 40};
    men.print();

    men[1] = 20;
    cout << "I changed value "  << endl;
    men.print();

    double d = men[1] + ular2[2];
    cout << "\nValue of d by addition: " << d << endl;
    return 0;
}
