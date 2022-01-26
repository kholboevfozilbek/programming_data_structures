///implementations

#include <iostream>
#include <stdexcept>
#include "bounded_Queue.h"
using namespace std;


Queue::Queue(int length)
{
    if (length <= 0)
        throw invalid_argument("Wrong size given for Queue!");

    capacity = length;
    data = new int[capacity];
    cout << "\nQueue is created " << endl;
}

Queue::Queue(const Queue &o )
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
    cout << "\nCopy constructor is called for Queue" << endl;
}

Queue::~Queue()
{
    delete [] data;
    cout << "\nQueue is destroyed " << endl;
}

void Queue::enque(int value)
{
    if ( counter == capacity )
        throw runtime_error("Queue is FULL, no place to insert that element!");

    data[afterLast] = value;
    afterLast = (afterLast+1) % capacity;
    ++counter;
}

int Queue::deque()
{
    if ( counter == 0 )
        throw runtime_error("Queue is EMPTY, nothing to remove!");

    int result = data[_front];
    _front = (_front+1) % capacity;
    --counter;

    return result;
}

void Queue::clear()
{
    if ( counter > 0 )
    {
        _front = 0;
        afterLast = 0;
        counter = 0;
    }
}

int Queue::front() const
{
    if ( counter == 0 )
        throw logic_error("Queue is EMPTY, nothing on the front!");

    return data[_front];
}

int Queue::back() const
{
    if ( counter == 0 )
        throw logic_error("Queue is EMPTY, nothing on last element!");

    if ( afterLast > 0 )
        return data[afterLast-1];
    else
        return data[capacity-1];
}

int Queue::size() const
{
    return counter;
}

void Queue::print()
{
    if ( counter > 0 )
    {
        for(int i=0; i<counter; ++i)
        {
           cout << data[(_front+i) % capacity] << "  ";
        }
    }
    else
        cout << " EMPTY!!!" << endl;
}

bool Queue::empty() const
{
    return ( counter == 0 );
}

bool Queue::full() const
{
    return ( counter == capacity );
}

Queue& Queue::operator= (const Queue &o )
{
    delete [] data;

    capacity = o.capacity;
    _front = o._front;
    afterLast = o.afterLast;
    counter = o.counter;

    data = new int[capacity];

    for(int i=0; i<counter; ++i)
    {
        data[(_front+1) % capacity] = o.data[(_front+1) % capacity];
    }

    return *this;
}

bool Queue::operator== (const Queue &o )
{
    bool flag = 0;
    if (counter = o.counter)
    {
        for(int i=0; i<counter; ++i)
        {
            if (data[(_front+1) % capacity] != o.data[(_front+1) % capacity])
            {
                flag = 1;
                break;
            }
        }

        if ( flag == 0)
            return true;
        else
            return false;
    }
    else
        return false;
}



