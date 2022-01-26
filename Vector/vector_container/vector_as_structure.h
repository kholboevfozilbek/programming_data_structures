/// library
#ifndef VECTOR_AS_STRUCTURE KNOWN
#define VECTOR_AS_STRUCTURE KNOWN

#include <iostream>
#include <stdexcept>
using namespace std;

class Vector
{
private:

    int capacity = 1;
    int* data = nullptr;
    int counter = 0;

public:

    Vector();
    //pre: none;
    //post: size of vector is capacity, vector is empty

    ~Vector();
    //pre: none
    //post: none

    Vector(const Vector &o);

    void push_back(int value);
    //pre: none
    //post: argument is last value

    void pop_back();
    //pre: vector is not empty
    // post: remove last element, size-1

    int front()const;
    //pre: vector is not empty
    //post: return first element

    int back()const;
    //pre: vector is not empty
    //post: return last element

    int size() const;
    //pre: none
    //post: current number of elements

    void clear();

    bool empty();

    Vector& operator= (const Vector &o);

    bool operator== (const Vector &o);

    int& operator[] (int index);
};




void print(Vector &o);

#endif // VECTOR_AS_STRUCTURE
