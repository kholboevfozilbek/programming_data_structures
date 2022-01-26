#include <iostream>

#define N 5

using namespace std;
void print(int* arr, int n);
void getter(void* arr, int length, int _size);

int main()
{
    int* int_arr = new int[N] {0};
    cout << "int array: \n"; print(int_arr, N);

    cout << "\n\nMemory addresses: \n";
    for(int i=0; i<N; ++i)
    {
        cout << &int_arr[i] << endl;
    }
    cout << endl;

    float* fray = new float[10] {0.000001};

    for(int i=0; i<10; ++i)
    {
        cout << fray[i] << " ";
    }

    int length;
    cout << "\nEnter a size for another array: "; cin >> length;

    double* d_arr = new double[length];
    for(int i=0; i<length; ++i)
    {
        cout << "#" << i+1 << ": ";
        cin >> d_arr[i];
    }

    cout << endl;

    for(int i=0; i<length; ++i)
    {
        cout << d_arr[i] << " ";
    }
    return 0;

    cout << endl;

    bool* barr = new bool[20];

    for(int i=0; i<20; ++i)
    {

    }
}

void print(int* arr, int n)
{
    for(int i=0; i<n; ++i)
    {
        cout << arr[i] << " ";
    }
}

