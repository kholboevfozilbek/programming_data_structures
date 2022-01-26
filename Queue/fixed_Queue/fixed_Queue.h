///library

#ifndef FIXED_QUEUE_H KNOWN
#define FIXED_QUEUE_H KNOWN

#include <stdexcept>
using namespace std;


struct Queue
{

private:

    static const int capacity=7;
    int data[capacity];
    int _front = 0;
    int afterLast = 0;
    int counter = 0;


public:

    Queue() = default;

    Queue(const Queue &o) = default;

    ~Queue() = default;

    void enque(int value);

    int deque();

    void clear();


    int front() const;

    int back() const;

    int size() const;

    void print();


    bool empty() const;

    Queue& operator= (const Queue &o) = default;
    bool operator== (const Queue &o ) const;

};

#endif // FIXED_QUEUE_H

