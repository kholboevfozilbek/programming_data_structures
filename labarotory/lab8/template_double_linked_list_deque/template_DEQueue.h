
#ifndef TEMPLATE_DEQUEUE_H KNOWN
#define TEMPLATE_DEQUEUE_H KNOWN
#include <iostream>
#include <stdexcept>
using namespace std;



template<typename T>
class DEQueue
{
private:
    struct node{
        T data;
        node* next;
        node* prev;
        node(T D, node* N=nullptr, node* P=nullptr)
        {
            data = D;
            next = N;
            prev = P;
        }
    };

    node* head = nullptr;
    node* tail = nullptr;
    int counter = 0;

public:

    DEQueue() = default;
    ~DEQueue() { clear(); }
    DEQueue(const DEQueue &o);

    void push_front(T value);
    void pop_front();

    void push_back(T value);
    void pop_back();
    void clear();

    T front();
    T back();
    int size() { return counter; }

    bool empty() { return ( counter == 0); }

    DEQueue operator= (const DEQueue &o);
    bool operator== (const DEQueue &o);

    void print();
};

template<typename T>
DEQueue<T>::DEQueue(const DEQueue<T> &o)
{
    node* walker = o.head;

    while(walker != nullptr)
    {
        push_back(walker->data);
        walker = walker->next;
    }
}

template<typename T>
void DEQueue<T>::push_front(T value)
{
    if ( head == nullptr )
    {
        node* n = new node(value);
        head = n;
        tail = n;
    }
    else
    {
        node* pred = head->prev;
        node* succ = head;

        node* n = new node(value, succ, pred);

        if (pred == nullptr)
            head = n;
        succ->prev = n;
    }

    ++counter;
}

template<typename T>
void DEQueue<T>::pop_front()
{
    node* pred = head->prev;
    node* succ = head;

    node* killer = succ;
    succ = succ->next;

    if (pred == nullptr)
        head = succ;
    if (succ == nullptr) // if we removing the only node!
        tail = nullptr;
    else
        succ->prev = pred;

    delete killer;

    --counter;
}

template<typename T>
void DEQueue<T>::push_back(T value)
{
    if (head == nullptr)
    {
        node* n = new node(value);
        head = n;
        tail = n;
    }
    else
    {
        node* pred = tail;
        node* succ = tail->next;

        node* n = new node(value, succ, pred);

        if (succ == nullptr)
            tail = n;
        pred->next = n;
    }
    ++counter;
}

template<typename T>
void DEQueue<T>::pop_back()
{
    node* pred = tail->prev;
    node* succ = tail;

    node* killer = succ;
    succ = succ->next;


    if (succ == nullptr )
        tail = pred;
    if (pred == nullptr)
        head = nullptr;
    else
        pred->next = succ;

    delete killer;

    --counter;
}

template<typename T>
T DEQueue<T>::front()
{
    if ( counter == 0 )
        throw logic_error("Queue is empty, nothing on the front!");
    return head->data;
}

template<typename T>
T DEQueue<T>::back()
{
    if ( counter == 0 )
        throw logic_error("Queue is empty, nothing on the back!");
    return tail->data;
}

template<typename T>
void DEQueue<T>::clear()
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

template<typename T>
DEQueue<T> DEQueue<T>::operator= (const DEQueue<T> &o)
{
    clear();

    node* walker = o.head;

    while(walker != nullptr)
    {
        push_back(walker->data);
        walker = walker->next;
    }
    return *this;
}

template<typename T>
bool DEQueue<T>::operator== (const DEQueue<T> &o)
{
    if ( counter == o.counter )
    {
        node* walker = head;
        node* walker2 = o.head;

        while(walker != nullptr)
        {
            if (walker->data != walker2->data)
                return false;

            walker = walker->next;
            walker2 = walker2->next;
        }

        return true;
    }
    else
        return false;
}

template<typename T>
void DEQueue<T>::print()
{
    if ( counter > 0 )
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

#endif // TEMPLATE_DEQUEUE_H

