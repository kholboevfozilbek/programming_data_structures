/// ADT interface, structure

#ifndef LIB_STACK_H KNOWN
#define LIB_STACK_H KNOWN

struct Stack
{

private:
    int max_size;
    int current_size;
    double* data;

public:

    Stack(int m_size=10);
    ~Stack();
    void print();
    void push(double value);

};

#endif // LIB_STACK_H
