
#include <stdexcept>

using namespace std;

template<typename T>
class Sorted_List
{
private:

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

    Sorted_List() = default;
    ~Sorted_List() { clear(); cout << "\nList is destroyed " << endl; }
    Sorted_List(const Sorted_List &o);

    void push( T value);
    void pop();
    void clear();

    T top();
    int size() { return counter; }
    int count( T target);
    void print();

    bool empty() { return ( counter == 0 ); }

    Sorted_List& operator= (const Sorted_List &o);
    bool operator== (const Sorted_List &o);

};

template<typename T>
Sorted_List<T>::Sorted_List(const Sorted_List &o)
{
    node* walker = o.head;

    while(walker != nullptr)
    {
        push(walker->data);
        walker = walker->next;
    }
}

template<typename T>
void Sorted_List<T>::push( T value)
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
void Sorted_List<T>::pop()
{
    if ( counter == 0 )
        throw runtime_error("List is empty, nothing to remove!");
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
void Sorted_List<T>::print()
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
        cout << "Empty !!! " << endl;
}

template<typename T>
void Sorted_List<T>::clear()
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
T Sorted_List<T>::top()
{
    if ( counter == 0 )
        throw logic_error("List is empty, nothing to remove!");
    return head->data;
}

template<typename T>
int Sorted_List<T>::count( T target)
{
    int takror = 0;

    node* walker = head;

    while(walker != nullptr)
    {
        if ( walker->data == target )
            ++takror;

        walker = walker->next;
    }

    return takror;
}

template<typename T>
Sorted_List<T>& Sorted_List<T>::operator= (const Sorted_List<T> &o)
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
bool Sorted_List<T>::operator== (const Sorted_List<T> &o)
{
    if ( counter == o.counter )
    {
        node* walker1 = head;
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
