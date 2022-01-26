
#include <iostream>
#include <stdexcept>
using namespace std;

template<typename T>
struct Queue
{

private:

    static const int capacity=7;
    T data[capacity];
    int _front = 0;
    int afterLast = 0;
    int counter = 0;


public:

    Queue() = default;

    Queue(const Queue &o) = default;

    ~Queue() = default;

    void enque(T value);

    T deque();

    void clear();


    T front() const;

    T back() const;

    int size() const { return counter; }

    void print();


    bool empty() const { return (counter == 0); }

    Queue& operator= (const Queue &o) = default;
    bool operator== (const Queue &o ) const;

};

template<typename T>
void Queue<T>::enque(T value)
{
    if ( counter == capacity)
        throw runtime_error("Queue is FULL, no place to insert that element!");
    data[afterLast] = value;
    afterLast = (afterLast+1) % capacity;

    ++counter;
}

template<typename T>
T Queue<T>::deque()
{
    if ( counter == 0 )
        throw logic_error("Queue is EMPTY, nothing to remove!");
    T result = data[_front];
    _front = (_front+1) % capacity;

    --counter;
}

template<typename T>
void Queue<T>::clear()
{
    counter = 0;
    _front = 0;
    afterLast = 0;
}

template<typename T>
T Queue<T>::front() const
{
    if ( counter == 0 )
        throw logic_error("Queue is EMPTY, nothing on the front!");
    return data[_front];
}

template<typename T>
T Queue<T>::back() const
{
    if ( counter == 0 )
        throw logic_error("Queue is EMPTY, nothing on the front!");

    if ( afterLast > 0 )
        return data[afterLast-1];
    else
        return data[capacity-1];
}

template<typename T>
void Queue<T>::print()
{
    if ( counter > 0 )
    {
        for (int i=0; i<counter; ++i)
        {
            cout << data[(_front+i) % capacity] << " -> ";
        }
        cout << " | " << endl;

    }
    else
        cout << " EMPTY!! " << endl;
}

template<typename T>
bool Queue<T>::operator== (const Queue<T> &o ) const
{
    if ( counter == o.counter )
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



