
#ifndef UNBOUNDED_STACK_H
#define UNBOUNDED_STACK_H


#include<iostream>
#include <stdexcept>
#include <string>
using namespace std;


template<typename T>
struct Stack
{

private:

    struct node
    {
        T data;
        node* next;
        node(T V, node* N = nullptr)
        {
            data = V;
            next = N;
        }
    };

    node* head = nullptr;
    node* tail = nullptr;
    int counter = 0;

public:

    Stack() = default;
    ~Stack();
    Stack(const Stack &o);

    void push(T value);
    void push_end(T value);
    T pop();

    T top() const;
    void print() const;

    bool empty() { return (counter == 0); }
    bool operator== (const Stack &o);
};


template<typename T>
Stack<T>::~Stack()
{
    while(head != nullptr)
    {
        node* killer = head;
        head = head->next;
        delete killer;
    }
    tail = nullptr;
    counter = 0;
    cout << "\nStack is destroyed " << endl;
}

template<typename T>
Stack<T>::Stack(const Stack<T> &o)
{
    node* walker = head;

    while(walker != nullptr)
    {
        push_end(walker->data);
        walker = walker->next;
    }
}

template<typename T>
void Stack<T>::push(T value)
{
    node* n = new node(value, head);

    if (head == nullptr)
        tail = n;
    head = n;
    ++counter;
}


template<typename T>
T Stack<T>::pop()
{
    if (counter == 0)
        throw runtime_error("Stack is empty");
    T result = head->data;
    node* killer = head;

    head = head->next;
    if(head == nullptr)
        tail = nullptr;
    delete killer;
    --counter;
    return result;
}


template<typename T>
T Stack<T>::top()
{
    if (counter == 0)
        throw runtime_error("Stack is empty");
    return head->data;
}

template<typename T>
void Stack<T>::print()
{
    if(counter == 0)
        cout << "Empty " << endl;
    node* walker = head;

    while(walker != nullptr)
    {
        cout << "\t" << walker->data << endl;
        walker = walker->next;
    }
    cout << endl;
}

template<typename T>
void Stack<T>::push_end(T value)
{
    node* n = new node(value, nullptr);
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

template<typename T>
bool Stack<T>::operator== (const Stack<T> &o)
{
    if (counter == o.counter)
    {
        node* w1 = head;
        node* w2 = o.head;

        while(w1 != nullptr)
        {
            if (w1->data != w2->data)
                return false;
            w1 = w1->next;
            w2 = w2->next;
        }
        return true;
    }
    else
        return  false;


}

struct Container
{

private:
    string description;
    string origin_country;
    double weight;

public:

    Container() = default;

    void setdescription(string D) {description = D; }
    string getDescription() {return description; }

    void setcountry(string C) {origin_country = C; }
    string getcountry() {return origin_country; }

    void setweight(double W);
    double getweight() {return weight; }
    friend ostream& operator<< (ostream &stream, const Container &o);
    bool operator!= (const Container &o);
    bool operator== (const Container &o);
    bool operator< (const Container &o);

};

void Container::setweight(double W)
{
    if (W <= 0)
        throw runtime_error("Negative value for weight!");
    weight = W;
}

ostream& operator<< (ostream &stream, const Container &o)
{
    stream << "\nContents:  " << o.description << endl << "Country: " << o.origin_country << "\nWeight: " << o.weight << endl;
    return stream;
}


bool Container::operator!= (const Container &o)
{
    if (description != o.description || weight != o.weight || origin_country != o.origin_country)
        return true;
    return false;
}

bool Container::operator== (const Container &o)
{
    if (description == o.description)
        return true;
    else
        return false;
}

bool Container::operator< (const Container &o)
{
    if (weight < o.weight)
        return true;
    return false;
}


#endif // UNBOUNDED_STACK_H

