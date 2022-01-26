
#include <iostream>
#include <stdexcept>

using namespace std;

template<typename T>
class Sorted_list
{

    struct node{
        T data;
        node* next;
        node( T D, node* N=nullptr)
        {
            data = D;
            next = N;
        }
    };

    node* head  = nullptr;
    int counter = 0;

public:

    Sorted_list() = default;
    ~Sorted_list() { clear(); cout << "\nList is distroyed " << endl; }
    Sorted_list(const Sorted_list &o);

    void push( T value);
    void pop();
    void clear();

    T top();
    int count( T target);
    int size() { return counter; }
    void print();

    bool empty() { return (counter == 0); }

    Sorted_list& operator= (const Sorted_list &o);
    bool operator== (const Sorted_list &o );

};

template<typename T>
Sorted_list<T>::Sorted_list (const Sorted_list<T> &o)
{
    node* walker = o.head;

    while(walker != nullptr)
    {
        push(walker->data);
        walker = walker->next;
    }
}

template<typename T>
void Sorted_list<T>::push( T value)
{
    node* pred = nullptr;
    node* succ = head;

    while(succ != nullptr && succ->data > value)
    {
        pred = succ;
        succ = succ->next;
    }

    node* n = new node(value, succ);

    if (pred == nullptr)
        head = n;
    else
        pred->next = n;

    ++counter;
}

template<typename T>
void Sorted_list<T>::pop()
{
    if ( counter == 0 )
        throw runtime_error("List is EMPTY, nothing to remove!");

    node* pred = nullptr;
    node* succ = head;

    node* killer = succ;

    succ = succ->next;

    if (pred == nullptr)
        head = succ;
    else
        pred->next = succ;

    delete killer;
    --counter;
}

template<typename T>
void Sorted_list<T>::clear()
{
    if ( counter > 0 )
    {
        node* killer;

        while(head != nullptr)
        {
            killer = head;

            head = head->next;

            delete killer;
        }
        counter = 0;
    }
}

template<typename T>
T Sorted_list<T>::top()
{
    if ( counter == 0 )
        throw runtime_error("List is EMPTY, nothing on the top!");

    return head->data;
}

template<typename T>
int Sorted_list<T>::count( T target)
{
    int takror = 0;
    node* walker = head;

    while(walker != nullptr)
    {
        if ( walker->data == target)
            ++takror;
        walker = walker->next;
    }

    return takror;
}

template<typename T>
void Sorted_list<T>::print()
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

template<typename T>
Sorted_list<T>& Sorted_list<T>::operator= (const Sorted_list<T> &o)
{
    clear();

    node* walker = o.head;

    while(walker != nullptr)
    {
        push(walker->data);
        walker = walker->next;
    }

    return *this;
}

template<typename T>
bool Sorted_list<T>::operator== (const Sorted_list<T> &o )
{
    if ( counter == o.counter)
    {
        node* w1 = head;
        node* w2 = o.head;

        while(w1 != nullptr)
        {
            if ( w1->data != w2->data )
                return false;

            w1  = w1->next;
            w2 = w2->next;
        }
        return true;
    }
    else
        return false;
}
