/// implementation

#include <iostream>
#include <stdexcept>
#include "balance_lib.h"

using namespace std;


Ubqueue::Ubqueue()
{
    data = new int[capacity];
    cout << "\nunbounded queue is created " << endl;
}

Ubqueue::~Ubqueue()
{
    delete [] data;
    cout << "\nunbounded queue is destroyed " << endl;
}

Ubqueue::Ubqueue(const Ubqueue &o)
{
    capacity = o.capacity;
    _front = o._front;
    afterLast = o.afterLast;
    counter = o.counter;

    data = new int[capacity];

    for(int i=0; i<counter; ++i)
    {
        data[(_front+i) % capacity] = o.data[(_front+i) % capacity];
    }
}

void Ubqueue::enque(int value)
{
    if (counter == capacity)
    {
        int* temp = new int[capacity*2];

        for(int i=0; i<counter; ++i)
        {
            temp[i] = data[(_front+i) % capacity];
        }

        delete [] data;
        data = temp;
        capacity = capacity * 2;
        _front = 0;
        afterLast = counter;
    }

    data[afterLast] = value;
    afterLast = (afterLast+1) % capacity;
    ++counter;
}

void Ubqueue::print()
{
    if (counter > 0 )
    {
        for(int i=0; i<counter; ++i)
        {
            cout << data[(_front+i) % capacity] << " ";
        }
        cout << endl;
    }
    else
        cout << " EMPTY!!! " << endl;
}

int Ubqueue::deque()
{
    if ( counter == 0 )
        throw runtime_error("Queue is empty, nothing to remove!");

    int result = data[_front];
    _front = (_front+1) % capacity;
    --counter;

    return result;
}

int Ubqueue::curr_capacity()
{
    return capacity;
}

int Ubqueue::front()
{
    if ( counter == 0 )
        throw logic_error("Queue is empty, nothing on the front!");

    return data[_front];
}

int Ubqueue::back()
{
    if ( counter == 0 )
        throw logic_error("Queue is empty, nothing on the back!");

    if ( afterLast > 0 )
    {
        return data[afterLast-1];
    }
    else
        return data[capacity-1];
}

int Ubqueue::index_front()
{
    return _front;
}
int Ubqueue::index_back()
{
    return afterLast;
}

int Ubqueue::size()
{
    return counter;
}

void Ubqueue::clear()
{
    if ( counter > 0 )
    {
        _front = 0;
        afterLast = 0;
        counter = 0;
    }
}

bool Ubqueue::empty()
{
    return ( counter == 0 );
}

Ubqueue& Ubqueue::operator= (const Ubqueue &o )
{
    delete [] data;

    capacity = o.capacity;
    _front = o._front;
    afterLast = o.afterLast;
    counter = o.counter;

    data = new int[capacity];

    for(int i=0; i<counter; ++i)
    {
        data[(_front+i) % capacity] = o.data[(_front+i) % capacity];
    }

    return *this;
}

bool Ubqueue::operator== (const Ubqueue &o )
{
    if (counter == o.counter)
    {
        for(int i=0; i<counter; ++i)
        {
            if (data[(_front+i) % capacity] != o.data[(_front+i) % capacity])
                return false;
        }

        return true;
    }

    else
        return false;
}



