///implementations

#include <iostream>
#include <stdexcept>
#include "fixed_Queue.h"
using namespace std;


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
    if ( counter == 0)
        throw logic_error("Queue is EMPTY, nothing on the first to remove!");

    int result = data[_front];
    _front = (_front+1) % capacity;
    --counter;
    return result;

}

void Queue::clear()
{
    if ( counter > 0)
    {
        _front = 0;
        afterLast = 0;
        counter = 0;
    }
}

void Queue::print()
{
    if (counter > 0)
    {
        for (int i=0; i<counter; ++i)
        {
            cout << data[ (_front+i) % capacity] << "  ";
        }

    }
    else
        cout << " EMPTY!!!";
}

int Queue::front() const
{
    if ( counter == 0)
        throw logic_error("Queue is EMPTY, nothing on the front!");

   return data[_front];
}


int Queue::back() const
{
    if (counter == 0)
        throw runtime_error("Queue is EMPTY, nothing at Last value!");

    if (counter > 0)
    {
       return data[afterLast-1];
    }
    else
    {
       return data[capacity-1];
    }
}

int Queue::size() const
{
    return counter;
}

bool Queue::empty() const
{
    return ( counter == 0);
}

bool Queue::operator== (const Queue &o ) const
{
    bool flag = 0;
    if (counter == o.counter)
    {
        if (_front == o._front)
        {
            if (afterLast == o.afterLast)
            {
                for(int i=0; i<counter; ++i)
                {
                    if (data[ (_front+i) % capacity] != o.data[(_front+i) % capacity] )
                    {
                        flag = 1;
                        break;
                    }

                }

                if (flag == 0)
                    return true;
                return false;
            }
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}




