
#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

int main()
{
    node* n;
    node* t;
    node* h;

    n = new node;
    n->data = 1;

    t = n;
    h = n;

    n = new node;
    n->data = 2;

    t->next = n;
    t = t->next;  // t = n also works to advance our t;

    n = new node;
    n->data = 3;

    t->next = n;
    t = n;   //t = t->next also works to advance our t

    n = new node;
    n->data = 4;

    t->next = n;
    t = n;

    n->next = nullptr; // finish of our list
}
