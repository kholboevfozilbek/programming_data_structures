
#include <iostream>
using namespace std;

template<typename T, int N=10>
class Array
{
private:
     T* data;

public:
    Array()
    {
        data = new T[N]; // size can not be changed, N is non-type parameter to template
    }
    T& operator[] (int index);


};

template<typename T, int N>
T& Array<T, N>::operator[] (int index)
{
    return data[index];
}

int main()
{
    Array<int, 3> integer;
    integer[0] = 13;
    integer[1] = 77;

    cout << integer[0] << " " <<  integer[1] << endl;

    return 0;
}
