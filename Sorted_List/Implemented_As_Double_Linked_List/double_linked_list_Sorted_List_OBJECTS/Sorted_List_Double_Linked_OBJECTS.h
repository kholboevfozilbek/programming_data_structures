
#include <iostream>
#include <stdexcept>

using namespace std;

template<typename T>
class Sorted_Double
{
    struct node{
        T data;
        node* next;
        node* prev;
        node( T D, node* N=nullptr, node* P=nullptr)
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

    Sorted_Double() = default;

    void push( T value);
    void pop();

    void print();
};

template<typename T>
void Sorted_Double<T>::push( T value)
{
    node* pred = nullptr;
    node* succ = head;

    while(succ != nullptr && succ->data > value)
    {
        pred = succ;
        succ = succ->next;
    }

    node* n = new node(value, succ, pred);

    if (pred == nullptr)
        head = n;
    else
        pred->next = n;

    if (succ == nullptr)
        tail = n;
    else
        succ->prev = n;
    ++counter;
}

template<typename T>
void Sorted_Double<T>::pop()
{
    if (counter == 0)
        throw runtime_error("List is empty, nothing to remove!");
    node* pred = nullptr;
    node* succ = head;

    node* killer = succ;
    succ = succ->next;

    if (pred == nullptr)
        head = succ;
    else
        pred->next = succ;

    if (succ == nullptr)
        tail = pred;
    else
        succ->prev = pred;

    delete killer;

    --counter;
}

template<typename T>
void Sorted_Double<T>::print()
{

}
