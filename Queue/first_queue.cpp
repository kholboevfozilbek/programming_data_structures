

#include <iostream>
#include <stdexcept>
using namespace std;


struct Queue
{

private:

    static const int capacity=7;
    int data[capacity];
    int front=0;
    int afterLast=0;
    int counter=0;

public:

    Queue() = default;
    //pre: none
    //post: queue is empty

    Queue(const Queue &o) = default;
    //pre: none
    //post: the calling que is copy of parameter(queue);

    ~Queue() = default;
    //pre: none
    //post: none

    void enqueue(int value)
    {
        if ( counter == capacity)
            throw runtime_error("Queue is Full, no place to insert that element!");

        data[afterLast] = value;
        afterLast = (afterLast+1) % capacity;
        ++counter;
    }
    //pre: queue is not full
    //post: parameter is in the frontmost place

    int deque()
    {
        if ( counter == 0)
            throw logic_error("Queue is empty, nothing to remove!");

        int result = data[front];
        front = (front+1) % capacity;
        --counter;
        return result;
    }
    //pre: queue is not empty
    //post: frontmost value is removed

    void print()
    {
        if (counter == 0)
            cout << " EMPTY!!!";

        for (int i=front; i<afterLast; ++i)
        {
            cout << data[i] << " ";
        }

    }

    int _front()
    {
        if ( counter == 0)
            throw runtime_error("Queue is Empty, nothing on the front!");

        return data[front];
    }

    int back()
    {
        if (counter == 0)
            throw logic_error("Queue is Empty, nothing at the back!");

        return data[afterLast-1];
    }

    int size()
    {
        return counter;
    }

    bool empty()
    {
        if ( counter == 0)
            return true;
        return false;
    }

    bool full()
    {
        if (counter == capacity)
            return true;
        return false;
    }

    void clear()
    {
        front = 0;
        afterLast = 0;
        counter = 0;
    }


};

int main()
{

    Queue q;
    cout << "Is queue empty now? " << q.empty() << endl;
    q.enqueue(7);
    q.enqueue(5);
    q.enqueue(9);

    cout << "Queue: -> "; q.print();
    cout << "\nThe frontmost element: " << q._front();
    cout << "\nSize of queue now:  " << q.size() << endl;

    cout << "\n\nRemove the frontmost element in queue: " << q.deque() << endl;

    cout << "\nQueue now: -> "; q.print();
    cout << "\nThe frontmost element: " << q._front();

    q.enqueue(-4);
    q.enqueue(1);
    q.enqueue(3);
    //q.enqueue(2);

    cout << "\n\nThe back: " << q.back() << endl;

    cout << "\nQueue now: -> "; q.print();
    cout << "\nSize of queue now:  " << q.size() << endl;
    cout << "Is queue empty now? " << q.empty() << endl;
    cout << "\nQueue FULL? "; q.full() == true? cout << "Yes" : cout << "No" << endl;

    q.clear();

    cout << "\nQueue now: -> "; q.print();

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);


    cout << "\n\nQueue now: -> "; q.print();

    return 0;
}
