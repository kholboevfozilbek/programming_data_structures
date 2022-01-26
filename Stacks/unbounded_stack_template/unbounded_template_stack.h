
#include <stdexcept>
#include <iostream>

using namespace std;

template<typename T>
class Stack
{
private:
    struct node{
        T data;
        node* next;
        node(T D, node* N=nullptr)
        {
            data = D, next = N;
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
    T pop();
    void clear();
    void insert_at_end(T value);

    T top();
    int size() { return counter; }
    void print();

    bool empty() { return ( head == nullptr ); }

    Stack& operator= (const Stack &o);

    bool operator== (const Stack &o);
};

template<typename T>
Stack<T>::~Stack()
{
    clear();

    cout << "\nStack is destroyed " << endl;
}

template<typename T>
void Stack<T>::insert_at_end(T value)
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

template<typename T>
Stack<T>::Stack(const Stack &o)
{
    counter = o.counter;

    node* walker = o.head;

    while(walker != nullptr )
    {
        insert_at_end(walker->data);
        walker = walker->next;
    }
}

template<typename T>
void Stack<T>::push(T value)
{
    node* n = new node(value, head);
    head = n;
    ++counter;
}

template<typename T>
T Stack<T>::pop()
{
    if (head == nullptr)
        throw runtime_error("Stack is empty, nothing to remove!");

    T result = head->data;
    node* killer = head;
    head = head->next;
    if ( head == nullptr )
        tail = nullptr;
    --counter;
    return result;
}

template<typename T>
void Stack<T>::clear()
{
    if ( head != nullptr )
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
T Stack<T>::top()
{
    if ( head != nullptr )
    {
        return head->data;
    }
    else
        throw logic_error("Stack is empty, nothing on the top !");
}

template<typename T>
void Stack<T>::print()
{
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
        cout << "EMPTY!!! " << endl;
}

template<typename T>
Stack<T>& Stack<T>::operator= (const Stack<T> &o)
{
    clear();

    counter = o.counter;

    node* walker = o.head;

    while(walker != nullptr)
    {
        insert_at_end(walker->data);
        walker = walker->next;
    }
    return *this;
}

template<typename T>
bool Stack<T>::operator== (const Stack<T> &o)
{
    if ( counter == o.counter )
    {
        node* walker = head;
        node* walker2 = o.head;
        while(walker != nullptr)
        {
            if (walker->data != walker2->data)
                return false;
        }
        return true;
    }
    else
        return false;
}


