#include <iostream>
#include <stdexcept>
#include <stdlib.h>

using namespace std;

class Vector
{
private:

    int capacity = 7;
    int* data = nullptr;
    int counter = 0;

public:

    Vector();
    ~Vector();
    Vector(const Vector &o);

    void push_back(int value);
    void pop_back();
    void clear();

    int front();
    int back();
    void print();
    int size() {return counter; }

    bool empty() { return (counter == 0); }
    Vector& operator= (const Vector &o);
    bool operator== (const Vector &o);
};

Vector::Vector(const Vector &o)
{
    capacity = o.capacity;
    counter = o.counter;

    data = new int[capacity];

    for(int i=0; i<counter; ++i)
    {
        data[i] = o.data[i];
    }
}

Vector::Vector()
{
    data = new int[capacity];
    cout << "\nvector is created " << endl;
}

Vector::~Vector()
{
    delete [] data;
    cout << "\nvector is destroyed " << endl;
}

void Vector::push_back(int value)
{
    if (counter == capacity)
    {
        int* temp = new int[2*capacity];
        capacity = capacity*2;

        for(int i=0; i<counter; ++i)
        {
            temp[i] = data[i];
        }

        delete [] data;
        data = temp;
    }

    data[counter] = value;
    ++counter;
}

void Vector::pop_back()
{
    if (counter == 0)
        throw runtime_error("Vector is Empty!!!");
    //int result = data[counter-1];
    --counter;
    //return result;
}

void Vector::print()
{
    if (counter > 0)
    {
        for(int i=0; i<counter; ++i)
            cout << data[i] << "  ";
        cout << endl;
    }
    else
        cout << "Empty!!" << endl;
}

int Vector::front()
{
    if (counter == 0)
        throw runtime_error("Vector is Empty!!");
    return data[0];
}

int Vector::back()
{
    if (counter == 0)
        throw runtime_error("Vector is Empty!");
    return data[counter-1];
}

void Vector::clear()
{
    counter = 0;
}

Vector& Vector::operator= (const Vector &o)
{
    delete [] data;
    capacity = o.capacity;
    counter = o.counter;

    data = new int[capacity];

    for(int i=0; i<counter; ++i)
    {
        data[i] = o.data[i];
    }

    return *this;
}

bool Vector::operator== (const Vector &o)
{
    if (counter == o.counter)
    {
        for(int i=0; i<counter; ++i)
        {
            if(data[i] != o.data[i])
                return false;
        }

        return true;
    }
    else
        return false;
}

int main()
{
    Vector v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);

    cout << "\n\nVector:  "; v.print();
    cout << "First:  " << v.front() << endl;
    cout << "Last:  " << v.back() << endl;
    cout << "Size:  " << v.size() << endl;
    v.pop_back();

    cout << "\n\nVector:  "; v.print();
    cout << "First:  " << v.front() << endl;
    cout << "Last:  " << v.back() << endl;
    cout << "Size:  " << v.size() << endl;

    v.push_back(11);

    cout << "\n\nVector:  "; v.print();
    cout << "First:  " << v.front() << endl;
    cout << "Last:  " << v.back() << endl;
    cout << "Size:  " << v.size() << endl;

    /*v.clear();
    cout << "\n\nVector:  "; v.print();
    cout << "Size:  " << v.size() << endl;
    cout << "First:  " << v.front() << endl;*/

    system("CLS");
    cout << "\n\nVector:  "; v.print();

    Vector v2(v);
    cout << "\n\nVector v2:  "; v2.print();
    cout << "First:  " << v2.front() << endl;
    cout << "Last:  " << v2.back() << endl;
    cout << "Size:  " << v2.size() << endl;

    v.push_back(13);
    v.push_back(7);

    v2.push_back(1);
    v2.push_back(10);
    v2.push_back(100);
    v2.push_back(-100);
    v2.push_back(-10);
    v2.push_back(-1);

    cout << "\n\nVector v2:  "; v2.print();

    cout << "\n\nVector:  "; v.print();

    system("CLS");
    v2 = v;
    if (v2 == v)
        cout << "Success!" << endl;

    cout << "\n\nVector v2:  "; v2.print();
    cout << "\n\nVector:  "; v.print();

    v2.pop_back();
    v2.pop_back();

    cout << "\n\nVector v2:  "; v2.print();
    cout << "\n\nVector:  "; v.print();

    puts("\n");
    return 0;
}
