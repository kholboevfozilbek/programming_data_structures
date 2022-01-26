

#include <iostream>
using namespace std;

template<typename T, typename U>
T getMin( T a,  U b )
{
    if ( a > b )
        return b;
    return a;
}

int main()
{
    int a, i = 7;
    double q = 8.236;

    a = getMin(i, q);

    cout << a << endl;

    return 0;
}
