
#ifndef TEMPLATE_STACK_LIB_H KNOWN
#define TEMPLATE_STACK_LIB_H KNOWN

#include <iostream>
#include <stdexcept>
#include "Footballer_Entity.h"

using namespace std;

template<typename T, int size>
class Stack
{

private:
    int capacity = 0;
    int counter = 0;
    T* data = nullptr;

public:

    Stack();
    ~Stack();
    Stack(const Stack &o);

    void push(T value);
    T pop();
    void clear()
    {
        counter = 0;
    }

    T top();
    int _size()
    {
        return counter;
    }

    bool empty()
    {
        return (counter == 0);
    }

    //Stack& operator= (const Stack &o);

    bool operator== (const Stack &o);

    Stack& operator[] (int index);
};

template<typename T, int size>
Stack<T, size>::Stack()
{
    capacity = size; // size cant be changed
    data = new T[capacity];
    cout << "\nbounded Stack is created " << endl;
}

template<typename T, int size>
Stack<T, size>::~Stack()
{
    if (counter > 0 )
        delete [] data;
    cout << "\nBounded Stack is destroyed " << endl;
}

template<typename T, int size>
Stack<T, size>::Stack(const Stack &o)
{
    capacity = o.capacity;
    counter = o.counter;

    data = new T[capacity];

    for (int i=0; i<counter; ++i)
    {
        data[i] = o.data[i];
    }

}

template<typename T, int size>
void Stack<T, size>::push(T value)
{
    if (counter == capacity)
        throw runtime_error("Stack is Full, no place to insert that element!");
    data[counter] = value;
    ++counter;
}

template<typename T, int size>
T Stack<T, size>::pop()
{
    if ( counter == 0 )
        throw runtime_error("Stack is EMPTY, nothing to remove!");
    T result = data[counter-1];
    --counter;
    return result;
}

template<typename T, int size>
T Stack<T, size>::top()
{
    if ( counter == 0 )
        throw runtime_error("Stack is EMPTY, nothing on the top!");

    return data[counter-1];
}

//template<typename T, int size>
//Stack<T, size>& Stack<T, size>::operator= (const Stack<T, size> &o)
//{
//    delete [] data;
//
//    capacity = o.capacity;
//    counter = o.counter;
//
//    data = new T[capacity];
//
//    for (int i=0; i<counter; ++i)
//    {
//        data[i] = o.data[i];
//    }
//
//    return *this;
//}

template<typename T, int size>
bool Stack<T, size>::operator== (const Stack<T, size> &o)
{
    if ( counter == o.counter )
    {
        for (int i=0; i<counter; ++i)
        {
            if (data[i] != o.data[i])
                return false;
        }
        return true;
    }
    else
        return false;
}

template<typename T, int size>
Stack<T, size>& Stack<T, size>::operator[] (int index)
{
    return data[index];
}


#endif // TEMPLATE_STACK_LIB_H
