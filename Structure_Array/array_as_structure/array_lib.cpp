
#include <iostream>
#include <stdexcept>
#include "array_lib.h"

using namespace std;


Array::Array(int length=10)
{
    if (length <= 0 )
        throw logic_error("Wrong size is given for array!");

    capacity = length;
    data = new int[capacity];
}

Array::~Array()
{
    if (counter > 0 )
    {
        delete [] data;
        cout << "\n\nArray is destroyed " << endl;
    }
}

int Array::length()
{
    return counter;
}

int& Array::operator[] (int index)
{
    if ( index < 0 )
        throw out_of_range("Trying to access non-existing index of array!");
    return data[index];
}

void Array::add(int value)
{
    if ( counter == capacity )
        throw runtime_error("Array is FULL, no place to insert it!");

    data[counter] = value;
    ++counter;
}

int Array::remove()
{
    if ( counter == 0 )
        throw runtime_error("Array is EMPTY, nothing to remove!");

    int result = data[counter-1];
    --counter;
    return result;
}
