


#include <iostream>
#include <stdexcept>
#include "library.h"

using namespace std;


void Queue::enque(int value)
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
        tail = n;
    }

    ++counter;
}

void Queue::print()
{
    if (counter > 0 )
    {
        node* walker = head;

        while (walker != nullptr)
        {
            cout << walker->data << " -> ";
            walker = walker->next;
        }
        cout << " | " << endl;
    }
    else
        cout << "Empty!!" << endl;
}

int Queue::dequeue()
{
    if (counter == 0)
        throw runtime_error("Queue is EMPTY, nothing to remove!");
    int result = head->data;

    node* killer = head;
    head = head->next;

    if (head == nullptr)
        tail = nullptr;
    delete killer;
    --counter;

    return result;
}


int Queue::front()
{
    if (counter == 0)
        throw logic_error("Queue is EMPTY, nothin on the front!");
    return head->data;
}

int Queue::back()
{
    if (counter == 0)
        throw logic_error("Queue is EMPTY, nothin on the back!");
    return tail->data;
}

void Queue::clear()
{
    if (head != nullptr)
    {
        node* killer;

        while (head != nullptr)
        {
            killer = head;
            head = head->next;

            delete killer;
        }

        tail = nullptr;
        counter = 0;
    }
}


Queue::~Queue()
{
    clear();
    cout << "\nQueue is destroyed " << endl;
}

Queue::Queue(const Queue &o)
{
    if (o.head != nullptr)
    {
        node* walker = o.head;

        while (walker != nullptr)
        {
            enque(walker->data);
            walker = walker->next;
        }
    }
}

Queue& Queue::operator= (const Queue &o)
{
    clear();

    node* walker = o.head;
    while (walker != nullptr)
    {
        enque(walker->data);
        walker = walker->next;
    }
    return *this;
}

bool Queue::operator== (const Queue &o)
{
    if (counter == o.counter)
    {
        node* walker = head;
        node* walkerO = o.head;

        while (walker != nullptr)
        {
            if (walker->data != walkerO->data)
                return false;
            walker = walker->next;
            walkerO = walkerO->next;
        }
        return true;
    }
    else
        return false;
}


