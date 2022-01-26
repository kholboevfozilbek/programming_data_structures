#ifndef ARRAY_LIB_H KNOWN
#define ARRAY_LIB_H KNOWN


class Array
{
private:

    int* data = nullptr;
    int capacity = 0;
    int counter = 0;

public:

    Array(int length);
    ~Array();

    void add(int value);

    int remove();

    int length();
    int& operator[] (int index);

};



#endif // ARRAY_LIB_H
