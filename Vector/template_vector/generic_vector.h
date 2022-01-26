/// library

#include <iostream>
#include <stdexcept>
using namespace std;

template<typename  T>
class Vector
{
private:

    int capacity = 1;
    T* data = nullptr;
    int counter = 0;

public:
    Vector();
    ~Vector();
    Vector(const Vector &o);

    void push_back(T value);
    void pop_back();
    void clear();

    T front();
    T back();
    int size();

    bool empty();

    T& operator= (const Vector &o);
    bool operator== (const Vector &o);
    T& operator[] (int index);
};


template<typename T>
Vector<T>::Vector()
{
    data = new T[capacity];
    cout << "vector is created " << endl;
}


template<typename  T>
Vector<T>::~Vector()
{
    delete [] data;
    cout << "\nvector2 is destroyed " << endl;
}

template<typename  T>
Vector<T>::Vector(const Vector &o)
{
    capacity = o.capacity;
    counter = o.counter;

    data = new T[capacity];

    for (int i=0; i<counter; ++i)
    {
        data[i] = o.data[i];
    }

}

template<typename  T>
void Vector<T>::push_back(T value)
{
    if ( counter == capacity)
    {
        T* temp = new T[capacity*2];
        capacity *= 2;

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
T& Vector<T>::operator[] (int index)
{
    if (index < 0 || index >= counter)
    {
        throw out_of_range("Trying to access value at non-existing index!");
    }

    return data[index];
}

template<typename T>
void Vector<T>::pop_back()
{
    if ( counter == 0 )
        throw runtime_error("Vector is EMPTY, nothing to remove!");

    --counter;
}

template<typename T>
T Vector<T>::front()
{
    if ( counter == 0 )
        throw logic_error("vector is empty, nothing on the front!");

    return data[0];
}

template<typename T>
T Vector<T>::back()
{
    if ( counter == 0 )
        throw logic_error("vector is empty, nothing on the front!");

    return data[counter-1];
}

template<typename T>
int Vector<T>::size()
{
    return counter;
}

template<typename T>
bool Vector<T>::empty()
{
    return ( counter == 0 );
}

template<typename T>
void Vector<T>::clear()
{
    counter = 0;
}

template<typename T>
T& Vector<T>::operator= (const Vector &o)
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
bool Vector<T>::operator== (const Vector &o)
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


