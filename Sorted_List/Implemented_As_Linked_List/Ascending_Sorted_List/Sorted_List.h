
#include <stdexcept>
using namespace std;

class Sorted_List
{
private:

    struct node{
        int data;
        node* next;
        node(int D, node* N=nullptr)
        {
            data = D; next = N;
        }
    };

    node* head  = nullptr;
    int counter = 0;


public:

    Sorted_List() = default;
    //pre: none
    //post: list is empty internally, so can be default

    ~Sorted_List() { clear();  cout << "\n\nList is destroyed " << endl; }

    Sorted_List(const Sorted_List &o);


    void push(int value);
    void pop();
    //pre: list must NOT be empty
    //post: remove the head (lowest->Ascending, greatest->Descending)

    void remove(int target);
    void clear();

    int top();
    //pre: list is NOT empty
    //post: return head->data;

    int count(int target);
    //pre: none
    //post: number of elements similar to argument function

    int size() { return counter; }
    void print();

    bool empty() { return ( counter == 0); }

    Sorted_List& operator= (const Sorted_List &o);

    bool operator== ( const Sorted_List &o);

};

Sorted_List::Sorted_List(const Sorted_List &o)
{
    node* walker = o.head;

    while(walker != nullptr)
    {
        push(walker->data);
        walker = walker->next;
    }
}

void Sorted_List::push(int value)
{
    node* pred = nullptr;
    node* succ = head;

    while(succ != nullptr && succ->data < value)
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

void Sorted_List::pop()
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
    -- counter;
}

void Sorted_List::print()
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

void Sorted_List::remove(int target)
{
    if ( counter == 0 )
        throw logic_error("List is empty, nothing to remove!");

    node* pred = nullptr;
    node* succ = head;

    while(succ != nullptr && succ->data != target)
    {
        pred = succ;
        succ = succ->next;
    }

    if ( succ == nullptr )
        throw logic_error("There is NO element like this in the list!");
    else
    {
        node* killer = succ;
        succ = succ->next;

        if (pred == nullptr)
            head = succ;
        else
            pred->next = succ;

        delete killer;

        --counter;
        cout << "\nTarget:  " << target << " removed! " << endl;
    }
}

int Sorted_List::top()
{
    if ( head == nullptr )
        throw runtime_error("List is empty, nothing to remove!");

    return head->data;
}

int Sorted_List::count(int target)
{
    int takror=0;

    node* walker = head;

    while(walker != nullptr)
    {
        if ( walker->data == target)
            ++takror;
        walker = walker->next;
    }

    return takror;
}

void Sorted_List::clear()
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

Sorted_List& Sorted_List::operator= (const Sorted_List &o)
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

bool Sorted_List::operator== ( const Sorted_List &o)
{
    if ( counter == o.counter)
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

