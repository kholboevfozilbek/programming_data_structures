
#include <iostream>
using namespace std;

template<typename T>
class Mypair
{
private:
    T a, b;

public:

    Mypair( T first, T second )
    {
        a = first;
        b = second;
    }

    T getMax();


};

template<typename T>
T Mypair<T>::getMax()
{
    T retval = (a>b? a : b );
    return retval;
}

int main()
{
    Mypair<double> IELTS(7.5, 8.5);
    cout << IELTS.getMax() << endl;
    return 0;
}
