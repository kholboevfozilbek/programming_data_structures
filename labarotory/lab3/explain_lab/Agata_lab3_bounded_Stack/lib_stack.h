/// ADT, structure interface

#ifndef LIB_STACK_H KNOWN
#define LIB_STACK_H KNOWN


struct Stack
{

private:
    int capacity = 0; // max_size
    float* data = nullptr;
    int counter = 0;  // current_size


public:

    Stack(float ms=10);
    ~Stack();

    Stack(const Stack &o);

    void print();
    void push(int value);
    float pop();

    bool operator== (const Stack &st);
    Stack& operator= (const Stack &st);
};

#endif // LIB_STACK_H
