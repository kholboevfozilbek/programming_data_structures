
#ifndef TEMPLATE_VECTOR_LIB_H KNOWN
#define TEMPLATE_VECTOR_LIB_H KNOWN


#include <iostream>
#include <stdexcept>
using namespace std;

template<typename T>
class Vector
{
private:
    T* data = nullptr;
    int capacity = 1;
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
    int size() { return counter; }

    bool empty() { return (counter == 0 );}

    Vector& operator= (const Vector &o);
    bool operator== (const Vector &o);
    T& operator[] (int index);
};

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
    cout << "vector is destroyed " << endl;
}

template<typename T>
Vector<T>::Vector(const Vector<T> &o)
{
    capacity = o.capacity;
    counter = o.counter;

    data = new T[capacity];

    for (int i=0; i<counter; ++i)
    {
        data[i] = o.data[i];
    }

}

template<typename T>
void Vector<T>::push_back(T value)
{
    if ( counter == capacity)
    {
        capacity = capacity*2;
        T* temp = new T[capacity];

        for (int i=0; i<counter; ++i)
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
    if ( counter == 0 )
        throw runtime_error("vector is EMPTY, nothing to remove!");
    --counter;
}

template<typename T>
T Vector<T>::front()
{
    if ( counter == 0 )
        throw logic_error("vector is empty, nothing at the front!");
    return data[0];
}

template<typename T>
T Vector<T>::back()
{
    if ( counter == 0 )
        throw logic_error("vector is empty, nothing at the back!");
    return data[counter-1];
}

template<typename T>
Vector<T>& Vector<T>::operator= (const Vector<T> &o)
{
    delete [] data;

    capacity = o.capacity;
    counter = o.counter;

    data = new T[capacity];

    for (int i=0; i<counter; ++i)
    {
        data[i] = o.data[i];
    }

    return *this;
}

template<typename T>
bool Vector<T>::operator== (const Vector<T> &o)
{
    if ( counter == o.counter)
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

template<typename T>
T& Vector<T>::operator[] (int index)
{
    if ( index < 0 || index >= counter)
        throw range_error("Non-existing index!");
    return data[index];
}



#endif // TEMPLATE_VECTOR_LIB_H
