#include <iostream>
using namespace std;

class List
{

    struct node
    {
        int data;
        node* next = nullptr;
    };

    node* head;
    node* tail;
    node* curr;
    int counter;

public:

    List();
    ~List();
    //List(const List &o);
    void add(int value);
    int _remove();
    void print();

};

List::List()
{
    head = nullptr;
    tail = nullptr;
    curr = nullptr;
    counter = 0;
    cout << "List created " << endl;
}

void List::add(int value)
{
    node* n = new node;
    n->data = value;

    if ( head == nullptr)
    {
        head = n;
        curr = n;
        tail = n;
    }
    else
    {
        curr->next = n;
        curr = n;
        tail = n;
    }
    ++counter;
}

void List::print()
{
    node* temp = head;

    while(temp->next != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << temp->data << " | " << endl;


}

List::~List()
{
    for(int i=0; i<counter; ++i)
    {
        node* killer = head;

        if (head->next == nullptr)
            head = nullptr;
        head = head->next;
        delete killer;
    }
    cout << "\n\nList destroyed " << endl;
}

int List::_remove()
{
    node* killer = head;
    int result = killer->data;
    head = head->next;
    delete killer;
    return result;
}


int main()
{
    List integers;

    int x;
    char check;
    while(true)
    {
        cout << "\nWant to insert an element? [y/n]: "; cin >> check;
        if (check == 'n' || check == 'N') break;

        cout << "Enter:  "; cin >> x;
        integers.add(x);
        cout << "\nList now:  "; integers.print();
    }


    cout << "\n\nRemove from first " << integers._remove() << endl;
    cout << "\n\nRemove from first " << integers._remove() << endl;
    integers.print();
}
