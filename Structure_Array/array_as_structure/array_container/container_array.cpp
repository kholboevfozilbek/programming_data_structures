
#include <iostream>
#include <stdexcept>
#include "container_array.h"
using namespace std;


Array::Array(int _size)
{
    if (_size <= 0)
        throw invalid_argument("Wrong size is given for array!");
    size = _size;
    data = new int[size] {0};
    cout << "\nArray is created " << endl;
}

Array::~Array()
{
    if (size > 0 )
        delete [] data;
    cout << "\nArray is destroyed " << endl;
}

int Array::length()
{
    return size;
}

int& Array::operator[](int index)
{
    if (index < 0 || index >= size)
        throw logic_error("non-existing index of array!");
    return data[index];
}
