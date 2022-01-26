/// implementations

#include <iostream>
#include <stdexcept>
#include "unbounded_lib.h"
using namespace std;


Ubqueue::Ubqueue()
{
    data = nullptr;
    counter = 0;
    cout << "\nUnbounded queue is created " << endl;
}

Ubqueue::~Ubqueue()
{
    delete [] data;
    cout << "\nUnbounded queue is destroyed " << endl;
}

Ubqueue::Ubqueue(const Ubqueue &o)
{
    counter = o.counter;

    data = new float[counter];

    for(int i=0; i<counter; ++i)
    {
        data[i] = o.data[i];
    }
}

void Ubqueue::enque(int value)
{
    float* temp = new float[counter+1];

    for(int i=0; i<counter; ++i)
    {
        temp[i] = data[i];
    }

    temp[counter] = value;

    delete [] data;
    data = temp;
    ++counter;
}

float Ubqueue::deque()
{
    if (counter == 0)
        throw runtime_error("Queue is empty, nothing to remove!");

    float* temp = new float[counter-1];
    float result = data[0];

    for(int i=1; i<counter; ++i)
    {
        temp[i-1] = data[i];
    }

    delete [] data;

    data = temp;
    --counter;

    return result;
}

float Ubqueue::front()
{
    if (counter == 0)
        throw runtime_error("Queue is empty, nothing on the front! ");

    return data[0];
}

float Ubqueue::back()
{
    if (counter == 0)
        throw logic_error("Queue is EMPTY, nothing on the back!");

    return data[counter-1];
}

void Ubqueue::print()
{
    if ( counter > 0 )
    {
        for(int i=0; i<counter; ++i)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
    else
        cout << " EMPTY!!!" << endl;
}

bool Ubqueue::empty()
{
    return ( counter == 0);
}

int Ubqueue::size()
{
    return counter;
}

void Ubqueue::clear()
{
    delete [] data;

    data = nullptr;
    counter = 0;
}

Ubqueue& Ubqueue::operator= (const Ubqueue &o)
{
    delete [] data;

    counter = o.counter;

    data = new float[counter];

    for(int i=0; i<counter; ++i)
    {
        data[i] = o.data[i];
    }
}

bool Ubqueue::operator== (const Ubqueue &o)
{
    if (counter == o.counter)
    {
        for(int i=0; i<counter; ++i)
        {
            if (data[i] != o.data[i])
                return false;
        }

        return true;
    }
    else
        return false;
}


