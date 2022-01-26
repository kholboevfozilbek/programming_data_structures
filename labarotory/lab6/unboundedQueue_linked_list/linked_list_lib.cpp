/// implementations

#include <iostream>
#include <stdexcept>
#include "linked_list_lib.h"
using namespace std;

Queue::~Queue()
{
    clear();
    cout << "\n\nunbounded queue is destroyed " << endl << endl;
}

Queue::Queue(const Queue &o)
{
    node* walker = o.head;
    while( walker != nullptr )
    {
        enque(walker->data);
        walker = walker->next;
    }
}

void Queue::enque(float value)
{
    node* n = new node(value);

    if (head == nullptr)
    {
        head = n;
        tail = n;
    }
    else
    {
        tail->next = n;
        tail = tail->next;
    }

    ++counter;
}

void Queue::print()
{
    if (counter > 0)
    {
        node* walker = head;
        while(walker != nullptr)
        {
            cout << walker->data << " -> ";
            walker = walker->next;
        }
        cout << " | " << endl;
    }
    else
        cout << "EMPTY!!! " << endl;
}

float Queue::deque()
{
    if (head == nullptr)
        throw runtime_error("Queue is Empty, nothing to remove!");

    int result = head->data;
    node* killer = head;
    if (head == tail)
        tail = nullptr;
    head = head->next;

    delete killer;
    --counter;

    return result;
}

float Queue::front()
{
    if (head == nullptr)
        throw logic_error("Queue is Empty, nothing on the front!");

    return head->data;
}

float Queue::back()
{
    if (head == nullptr)
        throw logic_error("Queue is Empty, nothing on the back!");

    return tail->data;
}

bool Queue::empty()
{
    return ( counter == 0 );
}

int Queue::size()
{
    return counter;
}

void Queue::clear()
{
    if (counter > 0)
    {
        while(head != nullptr)
        {
            node* killer = head;
            head = head->next;
            delete killer;
        }
        tail = nullptr;
        counter = 0;
    }
}

Queue& Queue::operator= (const Queue &o)
{
    clear();
    node* walker = o.head;

    while(walker != nullptr)
    {
        enque(walker->data);
        walker = walker->next;
    }

    return *this;
}



