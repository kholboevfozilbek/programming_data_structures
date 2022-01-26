


#include <iostream>
#include "template_stack_lib.h"
#include "Footballer_Entity.h"

using namespace std;

template<typename T, int size>
void print(Stack<T, size> &o)
{
    cout << endl;
    if (o._size() > 0 )
    {
        for (int i=o._size() - 1 ; i >= 0; --i)
        {
            cout << "\t" << o[i] << endl;
        }

    }
    else
        cout << "empty " << endl;
}

int main()
{
    Stack<char, 4> word;

    word.push('A');
    word.push('B');

    print(word);
    return 0;
}
