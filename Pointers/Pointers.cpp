#include <iostream>
using namespace std;


int main()
{
    int first, second;
    int* myptr;

    myptr = &first;
    *myptr = 10;

    myptr = &second;
    *myptr = 20;

    cout << "first : " << first << endl;
    cout << "\nsecond: " << second << endl;
    return 0;
}
