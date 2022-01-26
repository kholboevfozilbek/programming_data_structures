///implementations

#include <iostream>
#include <stdexcept>
#include "unbounded_lib.h"
using namespace std;


Queue::Queue()
{
    data = nullptr;
    counter = 0;
    cout << "\nUnbounded Queue is created " << endl;
}

Queue::~Queue()
{
    delete [] data;
    cout << "\nUnbounded Queue is destroyed " << endl;
}

void Queue::enque(int value)
{
    int* temp = new int[counter+1];

    for(int i=0; i<counter; ++i)
    {
        temp[i] = data[i];
    }

    temp[counter] = value;
    delete [] data;

    data = temp;
    ++counter;
}

void Queue::print()
{
    if ( counter > 0)
    {
        for(int i=0; i<counter; ++i)
            cout << data[i] << " ";

        cout << endl;
    }
    else
        cout << " EMPTY!!!" << endl;
}

int Queue::deque()
{
    if ( data == nullptr && counter == 0)
        throw runtime_error("Queue is empty, nothing to remove!");

    int* temp = new int[counter-1];
    int result = data[0];

    for(int i=1; i<counter; ++i)
    {
        temp[i-1] = data[i];
    }

    delete [] data;

    data = temp;
    --counter;
}
