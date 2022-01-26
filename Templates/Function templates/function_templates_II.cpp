
#include <iostream>
using namespace std;


template<class T>
T getMax( T a, T b )
{
    T result = (a>b? a : b);
    return result;
}


int main()
{
    int a=8, b=80, c;
    char x='05', y='5', z;

    c = getMax(a, b);
    z = getMax(x, y);

    cout << c << "  " << z << endl;

    return 0;
}

