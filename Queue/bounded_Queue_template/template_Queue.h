#ifndef TEMPLATE_QUEUE_H KNOWN
#define TEMPLATE_QUEUE_H KNOWN
#include <iostream>
#include <stdexcept>
using namespace std;


template<typename T, int size=0>
struct Queue
{
private:

    int capacity = 0;
    T* data = nullptr;
    int _front = 0;
    int afterLast = 0;
    int counter = 0;
public:

    Queue();

    Queue(const Queue &o);

    ~Queue();

    //modifiers

    void enque(T value);
    T deque();
    void clear();

    //selectors

    T front() const;
    T back() const;
    int _size(){ return counter; }
    void print() const;

    //queries

    bool empty() const { return (counter == 0); }

    //operators

    Queue& operator=(const Queue &o);
    bool operator==(const Queue &o) const;
};

template<typename T, int size>
Queue<T, size>::Queue()
{
    capacity = size;
    data = new T[capacity];
    cout << "\nbounded queue is created " << endl;
}

template<typename T, int size>
Queue<T, size>::Queue(const Queue<T, size> &o)
{
    capacity = o.capacity;
    _front = o._front;
    afterLast = o.afterLast;
    counter = o.counter;

    data = new T[capacity];

    for (int i=0; i<counter; ++i)
    {
        data[(_front+i) % capacity] = o.data[(_front+i) % capacity];
    }

}

template<typename T, int size>
Queue<T, size>::~Queue()
{
    delete [] data;
    cout << "\nbounded queue is destroyed " << endl;
}

template<typename T, int size>
void Queue<T, size>::enque(T value)
{
    if ( counter == capacity )
        throw runtime_error("Queue is FULL, no place to insert that element!");
    data[afterLast]= value;
    afterLast = (afterLast+1) % capacity;

    ++counter;
}

template<typename T, int size>
T Queue<T, size>::deque()
{
    if ( counter == 0 )
        throw runtime_error("Queue is EMPTY, nothing to remove!");

    T result = data[_front];
    _front = (_front+1) % capacity;
    --counter;

    return result;
}

template<typename T, int size>
void Queue<T, size>::clear()
{
    if ( counter > 0 )
    {
        _front = 0;
        afterLast = 0;
        counter = 0;
    }
}

template<typename T, int size>
T Queue<T, size>::front() const
{
    if ( counter == 0 )
    throw logic_error("Queue is EMPTY, nothing on the front!");

    return data[_front];
}

template<typename T, int size>
T Queue<T, size>::back() const
{
    if ( counter == 0 )
        throw logic_error("Queue is EMPTY, nothing on last element!");

    if ( afterLast > 0 )
        return data[afterLast-1];
    else
        return data[capacity-1];
}

template<typename T, int size>
void Queue<T, size>::print() const
{
    if ( counter > 0 )
    {
        for(int i=0; i<counter; ++i)
        {
           cout << data[(_front+i) % capacity] << " -> ";
        }
        cout << " | " << endl;
    }
    else
        cout << " EMPTY!!! " << endl;
}

template<typename T, int size>
Queue<T, size>& Queue<T, size>::operator=(const Queue<T, size> &o)
{
    delete [] data;

    capacity = o.capacity;
    _front = o._front;
    afterLast = o.afterLast;
    counter = o.counter;

    data = new T[capacity];

    for (int i=0; i<counter; ++i)
    {
        data[(_front+i) % capacity] = o.data[(_front+i) % capacity];
    }

    return *this;

}

template<typename T, int size>
bool Queue<T, size>::operator==(const Queue<T, size> &o) const
{
    if ( counter == o.counter)
    {
        for (int i=0; i<counter; ++i)
        {
           if (data[(_front+i) % capacity] != o.data[(_front+i) % capacity])
            return false;
        }
        return true;
    }
    else
        return false;
}

#endif // TEMPLATE_QUEUE_H

