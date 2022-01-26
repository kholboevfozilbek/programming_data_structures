/// implementation of ADT, structure methods

#include <iostream>
#include <stdexcept>
#include "lib_stack.h"
using namespace std;


Stack::Stack(float ms )
{
    if ( ms <= 0)
        throw logic_error("Wrong size for Stack!");
    capacity = ms;
    data = new float[capacity];
    cout << "\nstack is created " << endl;
}

Stack::~Stack()
{
    delete [] data;
    cout << "\nstack is destroyed " << endl;
}

void Stack::print()
{
    cout << endl;
    if (counter == 0)
        cout << "\nstack is empty " << endl;
    else
    {
        for (int i=counter-1; i >= 0; --i)
            cout << "\t" << data[i] << endl;
    }
}

void Stack::push(int value)
{
    if ( counter == capacity )
        throw runtime_error("stack is full, no place to insert that element!");

    data[counter] = value;
    ++counter;
}

float Stack::pop()
{
    if ( counter == 0)
        throw runtime_error("stack is empty, nothing to remove!");

    --counter;
    return data[counter];
}

Stack::Stack(const Stack &o)
{
    this->capacity = o.capacity;
    this->data = new float[capacity];
    this->counter = o.counter;

    for(int i=0; i<counter; ++i)
        data[i] = o.data[i];

    cout << "\ncopy constructor for stack is called " << endl;
}

bool Stack::operator== (const Stack &st)
{
    bool flag=0;
    if (this->counter == st.counter)
    {
        for(int i=0; i<counter; ++i)
        {
            if (this->data[i] != st.data[i])
            {
                flag == 1;
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

Stack& Stack::operator= (const Stack &st)
{
    // first of all s2 is already created
    // we dont know capacity, counter, and array length
    // 99% chance it will not be same as s1 -> so we need cleanup our s2 first
    // and then we can copy
    // s2.capacity  =  s1.capacity
    // s2.counter   =  s1.counter

    delete [] data;

    capacity = st.capacity;
    counter  = st.counter;

    this->data = new float[capacity];

    for(int i=0; i<counter; ++i)
        this->data[i] = st.data[i];
}
