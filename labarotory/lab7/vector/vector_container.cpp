
#include <iostream>
#include <stdexcept>
#include "vector_container.h"

using namespace std;


Vector::Vector()
{
    data = new int[capacity];
    cout << "\nvector is created " << endl;
}

Vector::~Vector()
{
    delete [] data;
    cout << "vector is destroyed " << endl;
}

Vector& Vector::operator= (const Vector &o)
{
    delete [] data;

    capacity = o.capacity;
    counter = o.counter;

    data = new int[capacity];

    for (int i=0; i<counter; ++i)
    {
        data[i] = o.data[i];
    }

    return *this;
}

bool Vector::operator== (const Vector &o)
{
    if ( counter == o.counter)
    {
        for (int i=0; i<counter; ++i)
        {
            if (data[i] != o.data[i])
                return false;
        }
        return true;
    }
    else
        return false;
}

Vector::Vector(const Vector &o)
{
    capacity = o.capacity;
    counter = o.counter;

    data = new int[capacity];

    for (int i=0; i<counter; ++i)
    {
        data[i] = o.data[i];
    }

}

int& Vector::operator[] (int index)
{
    if ( index < 0 || index >= counter)
        throw range_error("Non-existing index!");
    return data[index];
}

void Vector::push_back(int value)
{
    if ( counter == capacity)
    {
        capacity = capacity*2;
        int* temp = new int[capacity];

        for (int i=0; i<counter; ++i)
        {
            temp[i] = data[i];
        }
        delete [] data;
        data = temp;

    }

    data[counter] = value;
    ++counter;
}

void Vector::pop_back()
{
    if ( counter == 0 )
        throw runtime_error("vector is EMPTY, nothing to remove!");
    --counter;
}

int Vector::front()
{
    if ( counter == 0 )
        throw logic_error("vector is empty, nothing at the front!");
    return data[0];
}

int Vector::back()
{
    if ( counter == 0 )
        throw logic_error("vector is empty, nothing at the back!");
    return data[counter-1];
}
