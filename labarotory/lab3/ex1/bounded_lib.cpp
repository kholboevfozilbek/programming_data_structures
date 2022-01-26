///implementation of ADT, structure methods

#include <iostream>
#include <stdexcept>
#include "bounded_lib.h"
using namespace std;


Stack::Stack(int length)
{
    if (length <= 0)
        throw invalid_argument("Wrong size given for stack!");

    capacity = length;
    data = new float[capacity];
    cout << "\nstack is created " << endl;
}

Stack::Stack(const Stack &st)
{
    this->capacity = st.capacity;
    this->counter = st.counter;

    this->data = new float[capacity];

    for(int i=0; i< counter; ++i)
    {
        data[i] = st.data[i];
    }
    cout << "\ncopy constructor is called for stack\n";
}

Stack& Stack::operator= (const Stack &st)
{
    delete [] data;

    this->capacity = st.capacity;
    this->counter = st.counter;

    data = new float[capacity];

    for (int i=0; i<counter; ++i)
    {
        data[i] = st.data[i];
    }
}

bool Stack::operator== (const Stack &st)
{
    bool flag=0;
    if (counter == st.counter)
    {
        for(int i=0; i<counter; ++i)
        {
            if (data[i] != st.data[i])
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

Stack::~Stack()
{
    delete [] data;
    cout << "\nstack is destroyed " << endl;
}

void Stack::push(int value)
{
    if ( counter == capacity )
        throw runtime_error("stack is full, no place to put that element!");

    data[counter] = value;
    ++counter;
}

float Stack::pop()
{
    if ( counter == 0 )
        throw runtime_error("stack is empty, no element to return and remove!");

    --counter;
    return data[counter];
}

float Stack::top() const
{
    if ( counter == 0 )
        throw logic_error("stack is empty, nothing on the top right now!");

    return data[counter-1];
}





void Stack::print() const
{
    cout << endl;
    if ( counter == 0)
        cout << "\nstack is empty " << endl;

    for(int i=counter-1; i >=0; --i)
    {
        cout << "\t" << data[i] << endl;
    }
}

bool Stack::empty()
{
    if ( counter == 0)
        return true;
    return false;
}

int Stack::size() const
{
    return counter;
}

void Stack::clear()
{
    this->counter = 0;
}
