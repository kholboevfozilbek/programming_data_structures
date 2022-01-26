
#ifndef CONTAINER_ARRAY_H KNOWN
#define CONTAINER_ARRAY_H KNOWN


class Array
{
private:
    int* data;
    int size;

public:

    Array(int _size=10);
    ~Array();
    int length();
    int& operator[](int index);


};



#endif // CONTAINER_ARRAY_H
