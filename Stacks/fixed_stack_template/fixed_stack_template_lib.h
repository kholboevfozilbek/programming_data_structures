
#ifndef FIXED_STACK_TEMPLATE_LIB_H KNOWN
#define FIXED_STACK_TEMPLATE_LIB_H KNOWN


#include <iostream>
#include <stdexcept>
using namespace std;


template<typename T>
class Stack
{
private:
    static const int capacity=10;
    T data[capacity];
    int counter=0; // curr number of elements

public:

    /// constructors
    Stack() = default;

    Stack(const Stack&) = default;

    ~Stack() = default;


    /// modifier
    void push(T value);

    T pop();

    void clear();


    /// selectors
    T top();

    int size() const;

    /// queries

    bool empty() const { return counter; }

    /// operators
    Stack& operator= (const Stack&) = default;

    bool operator== (const Stack &o) const;

    T& operator[] (int index);

};

template<typename T>
void Stack<T>::push(T value)
{
    if ( counter == capacity)
        throw runtime_error("Stack is FULL, no place to insert that element!");
    data[counter] = value;
    ++counter;
}

template<typename T>
T Stack<T>::pop()
{
    if ( counter == 0 )
        throw runtime_error("Stack is EMPTY, nothing to remove!");
    T result = data[counter-1];
    --counter;
    return result;
}

template<typename T>
void Stack<T>::clear()
{
    counter = 0;
}

template<typename T>
T Stack<T>::top()
{
    if ( counter == 0 )
        throw logic_error("Stack is EMPTY, nothing on the top!");
    return data[counter-1];
}

template<typename T>
int Stack<T>::size() const
{
    return counter;
}

template<typename T>
bool Stack<T>::operator== (const Stack<T> &o) const
{
    if ( counter == o.counter )
    {
        for (int i=0; i<counter-1; ++i)
        {
            if ( data[i] != o.data[i])
            return false;
        }
        return true;
    }
    else
        return false;
}

template<typename T>
T& Stack<T>::operator[] (int index)
{
    if ( index < 0 || index >= counter)
        throw range_error("Non-existing index!");
    return data[index];
}

template<typename T>
void print(Stack<T> &o)
{
    if ( o.size() > 0 )
    {
        for (int i=o.size()-1; i >= 0; --i)
        {
            cout << "\t" <<o[i] << endl;
        }

    }
    else
        cout << "EMPTY!!! " << endl;
}


#endif // FIXED_STACK_TEMPLATE_LIB_H
