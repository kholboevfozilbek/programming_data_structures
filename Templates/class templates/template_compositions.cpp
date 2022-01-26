#include <iostream>
#include <string>

using namespace std;

template<typename T, int size=10>
class Array
{
private:

    T* data = nullptr;
    int capacity = 0;
    int counter = 0;

public:

    Array(int length);
    ~Array();

    void add(T value);

    int remove();

    int length();
    T& operator[] (int index);

};

template<typename T, int size>
class namedArray
{
private:

    Array< T, size> array;
    string name;

public:
    namedArray(string n);
    T& operator[](int index);
    T sum() const; //T must support operator+
    T max() const; //T must support operator<


};

template<typename T, int size>
namedArray<T, size>::namedArray(string n)
{
    name = n;
}
template<typename T, int size>
T& namedArray<T, size>::operator[](int index)
{
    return array[index];
}

template<typename T, int size>
T namedArray<T, size>::sum() const
{
    T res;
    for (int i=0; i<size; ++i)
    {
        res = res + array[i];
    }
    return res;
}

template<typename T, int size>
T namedArray<T, size>::max() const
{
    T big = array[0];

    for (int i=0; i<size; ++i)
    {
        if (array[i] > big)
            big = array[i];
    }

    return big;
}




int main()
{
    namedArray<float 4> myMarks("My Marks");
    return 0;
}
