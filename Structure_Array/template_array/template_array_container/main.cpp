

#include <iostream>
#include "template_array.h"
using namespace std;

template<typename T>
void print(Array<T> &o)
{
    if ( o.length() > 0 ) {
    for (int i=0; i< o.length(); ++i)
    {
        cout << o[i] << " ";
    }
    cout << endl; }

    else
        cout << "empty " << endl;

}

int main()
{
    Array<int> integer(5);
    integer[0] = 7777;
    integer[1] = 131313;

    print(integer);

    Array<float> ielts(4);
    ielts[0] = 8.5;
    ielts[1] = 7.0f;
    ielts[2] = 5.5;
    ielts[3] = 6.5;

    print(ielts);

    Array<char> word(8);
    word[0] = 'O';
    word[1] = 'N';
    word[2] = 'A';
    word[3] = 'J';
    word[4] = 'O';
    word[5] = 'N';
    word[6] = 'I';
    word[7] = 'M';

    print(word);
    return 0;
}
