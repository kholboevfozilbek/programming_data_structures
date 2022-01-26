
#include <iostream>
#include "List.h"
using namespace std;

int main()
{
    List Ints;

    Ints.addNode(1);
    Ints.addNode(22);
    Ints.addNode(26);
    Ints.addNode(10);
    Ints.addNode(3);
    Ints.printList();
    return 0;
}
