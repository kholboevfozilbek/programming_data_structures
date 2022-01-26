
#pragma once
#ifndef SET_ADT_H
#define SET_ADT_H

#include <iostream>
#include <stdexcept>

using namespace std;

template<typename T>
class Set
{
private:

    struct node {
        T data;
        node* next;
        node(T D, node* N=nullptr)
        {
            data = D;
            next = N;
        }
    };

    node* head = nullptr;
    node* tail = nullptr;
    size_t counter = 0;

public:

    Set() = default;
    ~Set();

    void insert(T value);
    int erase(T target);
    void clear();


    void print() const;
    size_t size() { return counter; }

    bool empty() {return (counter == 0); }


};

template<typename T>
Set<T>::~Set()
{
    clear();
    cout << "SET is destroyed " << endl;
}

template<typename T>
void Set<T>::clear()
{
    if (counter > 0)
    {
        node* killer;

        while(head != nullptr)
        {
            killer = head;
            head = head->next;

            delete killer;
        }

        tail = 0;
        counter = 0;
    }
}

template<typename T>
void Set<T>::insert(T value)
{
    node* pred = nullptr;
    node* succ = head;

    while(succ != nullptr && succ->data < value)
    {
        pred = succ;
        succ->next;
    }

    if (succ == nullptr || succ->data != value)
    {
        node* n = new node(value, succ);

        if (pred == nullptr)
            head = n;
        else
            pred->next = n;

        if (succ == nullptr)
            tail = n;

        ++counter;
    }
}


template<typename T>
void Set<T>::print() const
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
        cout << "Empty! " << endl;
}


template<typename T>
int Set<T>::erase(T target)
{
    node* pred = nullptr;
    node* succ = head;

    while(succ != nullptr && succ->data < target)
    {
        pred = succ;
        succ = succ->next;
    }

    if (succ != nullptr && succ->data == target)
    {
        node* killer = succ;
        succ = succ->next;

        if (pred == nullptr)
            head = succ;
        else
            pred->next = succ;

        if (succ == nullptr)
            tail = pred;

        delete killer;
        --counter;
        return 1;
    }

    return 0;
}



#endif // SET_ADT_H
