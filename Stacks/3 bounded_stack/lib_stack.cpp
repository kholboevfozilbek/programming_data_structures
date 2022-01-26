/// implementation of methods belongs to my structure ADT

#include <iostream>
#include <stdexcept>
#include "lib_stack.h"
using namespace std;


Stack::Stack(int m_size)
{
    if (m_size <= 0) throw logic_error("Wrong size given for stack!!");

    max_size = m_size;
    current_size = 0;
    data = new double[max_size];
    cout << "\nStack created\n";
}

Stack::~Stack()
{
    delete [] data;
    cout << "\n Stack destroyed \n";
}

void Stack::print()
{
    if (current_size == 0)
        cout << "the stack is empty " << endl;
    else
    {
        for(int i = current_size-1; i>=0; --i)
        {
            cout << "\t" << data[i] << endl;
        }
    }
}

void Stack::push(double value)
{
    if (current_size == max_size)
        throw runtime_error("the stack is at full capacity");

    data[current_size] = value;
    ++current_size;
}
