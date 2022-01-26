#include <iostream>
using namespace std;


int main()
{
    int first = 5, second = 15;
    int* p1, *p2;

    p1 = &first;
    p2 = &second;

    *p1 = 10;
    p1 = p2;

    *p1 = 20;

    cout << "first:  " << first << endl;
    cout << "\nsecond: " << second << endl;
    return 0;
}
