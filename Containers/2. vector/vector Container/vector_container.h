
#pragma once
#ifndef VECTOR_CONTAINER_H
#define VECTOR_CONTAINER_H

#include <iostream>
#include <stdexcept>

using namespace std;

template<typename T>
class Vector
{
private:

    int capacity = 7;
    T* data = nullptr;
    int counter = 0;

public:

    Vector();
    ~Vector();
    Vector(const Vector &o);

    void push_back(T value);
    void pop_back();
    void clear() { counter = 0; }

    T front();
    T back();
    int size() {return counter; }

    bool empty() { return (counter == 0); }
    Vector& operator= (const Vector &o);
    bool operator== (const Vector &o);
    T& operator[] (int index);
};

template<typename T>
Vector<T>::Vector(const Vector<T> &o)
{
    capacity = o.capacity;
    counter = o.counter;

    data = new T[capacity];

    for(int i=0; i<counter; ++i)
    {
        data[i] = o.data[i];
    }
}

template<typename T>
Vector<T>::Vector()
{
    data = new T[capacity];
    cout << "\nvector is created " << endl;
}

template<typename T>
Vector<T>::~Vector()
{
    delete [] data;
    cout << "\nvector is destroyed " << endl;
}

template<typename T>
void Vector<T>::push_back(T value)
{
    if (counter == capacity)
    {
        T* temp = new T[2*capacity];
        capacity = capacity*2;

        for(size_t i=0; i<counter; ++i)
        {
            temp[i] = data[i];
        }

        delete [] data;
        data = temp;
    }

    data[counter] = value;
    ++counter;
}

template<typename T>
void Vector<T>::pop_back()
{
    if (counter == 0)
        throw runtime_error("Vector is Empty!!!");
    --counter;
}

template<typename T>
T& Vector<T>::operator[] (int index)
{
    if (index < 0 || index >= counter)
        throw out_of_range("Invalid index accessed!");
    return data[index];
}

template<typename T>
T Vector<T>::front()
{
    if (counter == 0)
        throw runtime_error("Vector is Empty!!");
    return data[0];
}

template<typename T>
T Vector<T>::back()
{
    if (counter == 0)
        throw runtime_error("Vector is Empty!");
    return data[counter-1];
}

#endif