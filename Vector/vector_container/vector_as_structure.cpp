// implementations

#include <iostream>
#include <stdexcept>
#include "vector_as_structure.h"

using namespace std;


Vector::Vector()
{
    data = new int[capacity];
    cout << "vector is created " << endl;
}

Vector::~Vector()
{
    delete [] data;
    cout << "\nVector is destroyed " << endl;
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
    if (counter == o.counter)
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

void Vector::push_back(int value)
{
    if ( counter == capacity )
    {
        int* temp = new int[capacity*2];
        capacity *= 2;

        for(int i=0; i<counter; ++i)
            temp[i] = data[i];
        delete [] data;
        data = temp;
    }
    data[counter] = value;
    ++counter;
}

void Vector::pop_back()
{
    if ( counter == 0 )
        throw runtime_error("Vector is EMPTY, nothing to remove!");

    --counter;
}

void Vector::clear()
{
    if ( counter > 0 )
    {
        counter = 0;
    }
}

int Vector::front() const
{
    if ( counter == 0 )
        throw logic_error("Vector is EMPTY, nothing on the front!");
    return data[0];
}

int Vector::back() const
{
    if ( counter == 0 )
        throw logic_error("Vector is EMPTY, nothing on the back!");
    return data[counter-1];
}

int Vector::size () const
{
    return counter;
}


bool Vector::empty()
{
    return ( counter == 0 );
}

int& Vector::operator[] (int index)
{
    if ( index < 0 || index >= counter )
        throw out_of_range("Trying to get value of non-existing index in vector!");

    return data[index];
}


void print(Vector &o)
{
    if ( o.size() > 0 )
    {
        for(int i=0; i<o.size(); ++i)
        {
           cout << o[i] << " ";
        }
        cout << endl;
    }
    else
        cout << " EMPTY!!! " << endl;
}
