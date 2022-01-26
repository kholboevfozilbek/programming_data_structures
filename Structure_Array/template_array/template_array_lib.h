// template structure and implementations must happen in library!
#ifndef ARRAY_LIB_H KNOWN
#define ARRAY_LIB_H KNOWN

#include <stdexcept>
#include <iostream>

using namespace std;

template<typename T>
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

template <typename T>
Array<T>::Array(int length)
{
    if (length <= 0 )
        throw runtime_error("Wrong size is given for array!");

    capacity = length;
    data = new T[capacity];
}

template <typename T>
Array<T>::~Array()
{
    if (counter > 0 )
    {
        delete [] data;
        cout << "\n\nArray is destroyed " << endl;
    }
}

template <typename T>
int Array<T>::length()
{
    return counter;
}

template <typename T>
T& Array<T>::operator[] (int index)
{
    if ( index < 0 )
        throw out_of_range("Trying to access non-existing index of array!");
    return data[index];
}

template <typename T>
void Array<T>::add(T value)
{
    if ( counter == capacity )
        throw runtime_error("Array is FULL, no place to insert it!");

    data[counter] = value;
    ++counter;
}

template <typename T>
int Array<T>::remove()
{
    if ( counter == 0 )
        throw runtime_error("Array is EMPTY, nothing to remove!");

    T result = data[counter-1];
    --counter;
    return result;
}




#endif // ARRAY_LIB_H
