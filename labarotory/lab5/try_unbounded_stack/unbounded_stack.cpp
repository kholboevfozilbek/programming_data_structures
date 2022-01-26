/// implementations


#include <iostream>
#include <stdexcept>
#include "unbounded_stack.h"

using namespace std;


void Stack::push(int value)
{
    if (head == nullptr)
    {
        node* n = new node(value);
        head = n;
        tail = n;
    }
    else
    {
        node* n = new node(value, head);
        head = n;
    }
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
            cout << "\t" <<walker->data << endl;
            walker = walker->next;
        }
    }
    else
        cout << " EMPTY!!!" << endl;
}

int Stack::pop()
{
    if ( head == nullptr )
        throw runtime_error("Stack is empty, nothing to remove!");

    int result = head->data;

    node* killer = head;
    head = head->next;

    if ( head == nullptr)
        tail = nullptr;
    delete killer;
    --counter;

    return result;
}

int Stack::top()
{
    if (head == nullptr)
        throw logic_error("Stack is EMPTY, nothing on the top!");

    return head->data;
}

int Stack::size()
{
    return counter;
}

bool Stack::empty()
{
    return ( counter == 0 );
}

void Stack::smth()
{
    cout << "head =  " << head << endl;
    cout << "tail = " << tail << endl;;
    cout << "counter = " << counter << endl;
}

void Stack::clear()
{
    if ( counter > 0 )
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

Stack::~Stack()
{
    clear();
    cout << "\n\nunbounded stack is destroyed " << endl << endl;
}
