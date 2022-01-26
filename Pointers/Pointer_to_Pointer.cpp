#include <iostream>
using namespace std;


int main()
{
    int a;
    int* b;  // normal pointer to integer
    int** c;  // pointer to pointer

    a = 5;
    b = &a;
    c = &b;

    cout << "&b: " << &b << endl;
    cout << "c:  " << c << endl;
    cout << "*c: " << *c << endl;
    cout << "**c " << **c << endl;

    int** arr = new int*[3]; // here we have pointer to pointer

    for(int i=0; i<3; ++i)
    {
        arr[i] = new int [4]; // here we have pointer to int
    }

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<4; ++j)
        {
            arr[i] = 0;
        }
    }


    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<4; ++j)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }




    return 0;
}
