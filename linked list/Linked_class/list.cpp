/// implementation of my methods

#include <iostream>
#include "list.h"

using namespace std;

List::List()
{
    t = nullptr;
    h = nullptr;
    curr = nullptr;
}

void List::addNode(int addData)
{
    node* n = new node;
    n->next = nullptr;
    n->data = addData;

    if (h != nullptr)
    {
        while( curr->next != nullptr)  /// advancer of our curr to last node in the list
        {
            curr = curr->next;
        }
        curr->next = n;  /// linker of last node to new node (by n)
    }
    else
    {
        h = n;
    }
}

void List::printList()
{
    curr = h;

    while(curr != nullptr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
