

#include <iostream>
#include "unbounded_lib.h"
using namespace std;

Queue::~Queue()
{
    if (head != nullptr && tail != nullptr)
    {
        while(head != nullptr)
        {
            node* killer = head;

            head = head->next;

            delete killer;
        }
        tail = nullptr;
        counter = 0;
        cout << "unbounded queue (list) destroyed " << endl;

    }
}

void Queue::enque(int value)
{
    node* n = new node(value);

    if (head == nullptr && tail == nullptr)
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
    node* walker = head;

    while(walker != nullptr)
    {
        cout << walker->data << " -> ";
        walker = walker->next;
    }
    cout << " | " << endl;
}
