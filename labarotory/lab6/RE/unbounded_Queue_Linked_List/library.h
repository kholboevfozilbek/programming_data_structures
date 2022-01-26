
#include <iostream>
#include <stdexcept>
using namespace std;

class Queue
{
private:

    struct node {
        int data;
        node* next;
        node(int D, node* N=nullptr)
        {
            data = D;
            next = N;
        }
    };

    node* head = nullptr;
    node* tail = nullptr;
    int counter = 0;

public:

    Queue() = default;
    ~Queue();
    Queue(const Queue &o);

    void enque(int value);
    int dequeue();
    void clear();

    void print();
    int front();
    int back();
    int size() { return counter; }

    bool empty() { return (counter == 0); }

    Queue& operator= (const Queue &o);
    bool operator== (const Queue &o);
};
