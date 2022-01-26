/// implementations

#include <iostream>
#include <stdexcept>
#include "unbounded_linked_lib.h"

using namespace std;

Queue::Queue()
{
    //no nodes, empty addresses -> empty queue(list)
    head = nullptr;
    tail = nullptr;
    counter = 0;
    cout << "\nunbounded queue (empty list) created " << endl;
}

void Queue::enque(double value)
{
    node* n = new node(value);
    //n->data = value;

    if (head == nullptr)
    {
        head = n;
        tail = n;
    }
    else
    {
        tail->next = n;
        tail = tail->next; //tail = n
    }

    ++counter;
}

double Queue::deque()
{
    if (head == nullptr)
        throw runtime_error("Queue is empty, nothing to remove!");
    int result = head->data;
    node* killer = head;

    if (head->next != nullptr)
    {
        head = head->next;
    }
    else
    {
        head = nullptr;
        tail = nullptr;
    }

    delete killer;
    --counter;

    return result;
}

void Queue::print()
{
    if (head == nullptr && counter == 0 )
        cout << " EMPTY!!! " << endl;
    else
    {
        node* temp = head;

        while(temp->next != nullptr)
        {
        cout << temp->data << "->";
        temp = temp->next;
        }
        cout << temp->data << " | " << endl;
    }
}

double Queue::front()
{
    if (head == nullptr)
        throw logic_error("Queue is empty, nothing on the front!");

    return head->data;
}

double Queue::back()
{
    if (head == nullptr && tail == nullptr)
        throw logic_error("Queue is Empty, nothing at the end of list!");

    return tail->data;
}

int Queue::size()
{
    return counter;
}

Queue::~Queue()
{
    if (head->next != nullptr)
        while(head->next != nullptr)
        {
            node* killer = head;
            head = head->next;
            delete killer;
        }

    node* killer = head;
    head = nullptr;
    tail = nullptr;
    counter = 0;
    delete killer;
    cout << "\n\nUnbounded queue(linked list) is destroyed " << endl;
}
void Queue::clear()
{
    if (head->next != nullptr)
        while(head->next != nullptr)
        {
            node* killer = head;
            head = head->next;
            delete killer;
        }
    node* killer = head;
    head = nullptr;
    tail = nullptr;
    counter = 0;
    delete killer;
    cout << " Queue successfully cleared! " << endl;
}
bool Queue::empty()
{
    if (head == nullptr)
        return true;
    return false;
}

Queue::Queue( Queue &o)
{
    node* temp = o.head;

    if (temp->next == nullptr)
    {
        node* n = new node(temp->data);
        head = n;
        tail = n;
        ++counter;
    }
    else
    {
        while(temp->next != nullptr)
        {
            node* n = new node(temp->data);
            temp = temp->next;
            if (head == nullptr)
            {
                head = n;
                tail = n;
            }
            else
            {
                tail->next = n;
                tail = tail->next; //tail = n
            }

            ++counter;
        }
//
//        node* n = new node(o.tail->data);
//        tail->next = n;
//        tail = tail->next;
//        ++counter;

    }
    cout << "\n\ncopy constructor for unbounded empty queue " << endl;
}
