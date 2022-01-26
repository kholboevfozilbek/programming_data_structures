
#include <iostream>
#include <stdexcept>
using namespace std;

struct Queue
{

    int capacity = 0;
    int* data = nullptr;
    int _front = 0;
    int afterLast = 0;
    int counter = 0;

    Queue(int length);

    Queue(const Queue &o);

    ~Queue();

};

Queue::Queue(int length)
{
    if (length <= 0)
        throw invalid_argument("Wrong size given for Queue!");

    capacity = length;
    data = new int[capacity];
    cout << "\nQueue is created" << endl;
}

Queue::Queue(const Queue &o)
{
    capacity = o.capacity;
    counter = o.counter;
    _front = o._front;
    afterLast = o.afterLast;

    data = new int[capacity];

    for(int i=0; i<counter; ++i)
    {
        data[ (_front+1) % capacity] = o.data[(_front+1)% capacity];
    }
}

Queue::~Queue()
{
    delete [] data;

    cout << "\nQueue is destroyed" << endl;
}
