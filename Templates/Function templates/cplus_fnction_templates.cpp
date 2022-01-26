

#include <iostream>
using namespace std;


template<typename T>
T Getmax( T a, T b)
{
    if ( a > b )
        return a;
    return b;
}


int main()
{
    int a=13, b=77, c;
    char x='A', y='B', z;

    c = Getmax<int>(a, b);
    z = Getmax<char>(x, y);

    cout << c << "  " << z << endl;

    return 0;
}
