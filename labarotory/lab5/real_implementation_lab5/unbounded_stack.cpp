// implementations

#include <iostream>
#include <stdexcept>
#include "unbounded_stack.h"

using namespace std;


void Stack::push(int value)
{
    node* n = new node(value, head);
    head = n;
    ++counter;
}

void Stack::print()
{
    cout << endl;
    if ( counter > 0 )
    {
        node* walker = head;

        while(walker != nullptr)
        {
            cout << "\t" << walker->data << endl;
            walker = walker->next;
        }
    }
    else
        cout << " EMPTY!!! " << endl;
}

float Stack::pop()
{
    if ( head == nullptr)
        throw runtime_error("Stack is EMPTY, nothing to remove!");

    int result = head->data;

    node* killer = head;
    head = head->next;
    if (head == nullptr)
        tail = nullptr;
    delete killer;
    --counter;

    return result;
}

void Stack::clear()
{
    if ( head == nullptr)
        throw logic_error("Stack is EMPTY, nothing to clear!");

    while(head != nullptr)
    {
        node* killer = head;
        head = head->next;
        delete killer;
    }
    tail = nullptr;
    counter = 0;
}

Stack::~Stack()
{
    clear();
    cout << "\n\nunbounded Stack is destroyed " << endl;
}


Stack::Stack(const Stack &o)
{
        node* walker = o.head;

        while(walker != nullptr)
        {
            insert_at_end(walker->data);
            walker = walker->next;
        }
}

void Stack::insert_at_end(float value)
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

float Stack::top()
{
    if (head == nullptr)
        throw logic_error("Stack is Empty, nothing on the top! ");
    return head->data;
}

int Stack::size()
{
    return counter;
}

bool Stack::empty()
{
    cout << ( head == nullptr );
}

Stack& Stack::operator= (const Stack &o)
{
    clear();

    node* walker = o.head;

    while(walker != nullptr)
    {
        insert_at_end(walker->data);
        walker = walker->next;
    }

    return *this;
}

bool Stack::operator== (const Stack &o)
{
    if (this->counter = o.counter )
    {
        node* walker1 = this->head;
        node* walker2 = o.head;

        while(walker1 != nullptr)
        {
            if (walker1->data != walker2->data)
                return false;

            walker1 = walker1->next;
            walker2 = walker2->next;
        }
        return true;
    }
    else
        return false;
}
