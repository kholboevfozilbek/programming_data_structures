/// implementation of methods belongs to ADT, structure

#include <iostream>
#include <stdexcept>
#include "fixed_stack_lib.h"
using namespace std;


void Stack::print()
{
    for(int i=counter-1; i >= 0; --i)
    {
        cout << "\t" << data[i] << endl;
    }
}

void Stack::push(int value)
{
    if (counter == 10)
        throw runtime_error("stack is at full capacity!");
    data[counter] = value;
    ++counter;
}

int Stack::pop()
{
    if (counter == 0)
        throw runtime_error("stack is empty!");

    --counter;
    return data[counter];
}

int Stack::top()
{
    return data[counter-1];
}

int Stack::size() const
{
    return counter;
}

bool Stack::empty() const
{
    if ( counter == 0)
        return true;
    else
        return false;
}

bool Stack::operator== (const Stack &o) const
{
    bool flag=0;
    if (this->counter == o.counter)
    {
        for(int i=this->counter-1; i >= 0; --i)
        {
            if (this->data[i] != o.data[i])
                flag = 1;
        }
        if (flag == 0)
            return true;
        else
            return false;
    }
    else
        return false;
}

void Stack::clear()
{
    this->counter == 0;
}

