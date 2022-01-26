
#include <iostream>
#include <stdexcept>
using namespace std;

struct Ubqueue
{

    int* data;
    int counter;

public:

    Ubqueue();
    ~Ubqueue();

    void enque(int value);
    int deque();

    void print();

};

Ubqueue::Ubqueue()
{
    data = nullptr;
    counter = 0;
    cout << "\nUnbounded Queue is created " << endl;
}

Ubqueue::~Ubqueue()
{
    delete [] data;
    cout << "\nUnbounded queue is destroyed " << endl;
}

void Ubqueue::enque(int value)
{
    int* temp = new int[counter+1];

    for(int i=0; i<counter; ++i)
    {
        temp[i] = data[i];
    }

    temp[counter] = value;

    delete [] data;
    data = temp;
    ++counter;
}

void Ubqueue::print()
{
    if (counter > 0 )
    {
        for(int i=0; i<counter; ++i)
        {
            cout << data[i] << " ";
        }
    }
    else
        cout << " EMPTY!!!" << endl;
}

int Ubqueue::deque()
{
    if (data == nullptr && counter == 0)
        throw runtime_error("Queue is empty, nothing to remove ");

    int* temp = new int[counter-1];

    for(int i=1)
}

int main()
{
    Ubqueue q;

    int x;
    char check;
    while(true)
    {
        cout << "\nWant to insert an element? [y/n]:  "; cin >> check;

        if (check == 'n' || check == 'N') break;

        cout << "Enter:   "; cin >> x;
        q.enque(x);
        cout << "\nQueue now -> "; q.print();
    }
    return 0;
}
