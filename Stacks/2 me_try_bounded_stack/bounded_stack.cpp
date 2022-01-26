/// implementation of methods of ADT, structure

#include <iostream>
#include <stdexcept>
#include "bounded_stack.h"
using namespace std;


Stack::Stack(int length)
{
    if (length <= 0)
        throw runtime_error("Wrong size for stack!!!");

    this->capacity = length;
    data = new double[capacity];
    cout << "\nstack created\n";
}

Stack::~Stack()
{
    delete [] data;
    cout << "\nstack destroyed" << endl;
}

void Stack::print()
{
    for(int i=counter-1; i >= 0; --i)
    {
        cout << "\t" << *(data+i) << endl;
    }
}

void Stack::push(double value)
{
    if ( this->full() == true)
        throw runtime_error("Stack is FULL!!!");
    data[counter] = value;
    ++counter;
}

double Stack::pop()
{
    if ( this->empty() == true)
        throw runtime_error("Stack is EMPTY!!!");

    --counter;
    return data[counter];
}

double Stack::top()
{
    if ( this->empty() == true)
        throw runtime_error("Stack is EMPTY!!!");

    return data[counter-1];
}

bool Stack::empty()
{
    if ( counter == 0)
        return true;
    return false;
}

bool Stack::full()
{
    if (counter == capacity)
        return true;
    return false;
}
int Stack::size()
{
    return counter;
}
