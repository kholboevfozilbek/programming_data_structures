
#include <iostream>
#include <stdexcept>
using namespace std;


struct Queue
{

    static const int capacity = 7;
    int data[capacity];
    int front = 0;
    int afterLast = 0;
    int counter = 0;

public:

    Queue() = default;

    Queue(const Queue &o) = default;

    ~Queue() = default;

    void enque(int value);

    int deque();

    void print();

    int _front();

    int back() const;

    int size() const;

    void clear();

    bool empty();

};

void Queue::enque(int value)
{
    if ( counter == capacity)
        throw runtime_error("Queue is full, no place to insert that element!");

    data[afterLast] = value;
    afterLast = (afterLast+1) % capacity;
    ++counter;
}

int Queue::deque()
{
    if( counter == 0)
        throw runtime_error("Queue is empty, nothing to remove!");

    int result = data[front];
    front = (front+1) % capacity;
    --counter;
    return result;
}

void Queue::print()
{
    if (counter > 0)
    {
        for(int i=0; i<counter; ++i)
        {
            cout << data[(front + i)% capacity] << "  ";
        }
    }
    else
        cout << " EMPTY!!!";
    cout << endl;
}

int Queue::_front()
{
    if ( counter == 0)
        throw logic_error("Queue is empty, nothing at the front!");

    return data[front];
}

int Queue::back() const
{
    if ( counter == 0)
        throw logic_error("Queue is empty, nothing at the back!");

    if ( afterLast > 0)
    {
        return data[afterLast-1];
    }
    else
    {
        return data[capacity-1];
    }
}

int Queue::size() const
{
    return counter;
}

void Queue::clear()
{
    if ( counter > 0 )
    {
        front = 0;
        afterLast = 0;
        counter = 0;
    }
}

bool Queue::empty()
{
    return ( counter == 0 );
}


int main()
{
    Queue q;
    q.enque(7);
    q.enque(5);
    q.enque(9);
    q.enque(-4);
    q.enque(1);

    cout << "\nQueue now:  "; q.print();
    cout << "Number of elements on queue now:  " << q.size() << endl;
    cout << "\nRemove topmost:  " << q.deque() << endl;
    cout << "\nThe frontmost now:  " << q._front() << endl;
    cout << "\nThe last element -> back:  " << q.back() << endl;
    cout << "\nQueue now:  "; q.print();
    cout << "\nRemove topmost:  " << q.deque() << endl;

    q.enque(3);
    q.enque(2);
    q.enque(-6);
    q.enque(13);
    cout << "\nThe frontmost now:  " << q._front() << endl;
    cout << "\nThe last element -> back:  " << q.back() << endl;

    cout << "\nQueue now:  "; q.print();

    cout << "Number of elements on queue now:  " << q.size() << endl;

    cout << "\n\n q.clear()...  \n"; q.clear();
    cout << "Number of elements on queue now:  " << q.size() << endl;
    cout << "\nQueue now:  "; q.print();


    return 0;
}
