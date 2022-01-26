/// ADT, structure interface

struct Stack
{

private:
    double* data = nullptr;
    int capacity = 0;
    int counter  = 0;

    ///Invariants
    ///size, length of the dynamic array is -> capacity which is taken from user
    ///counter is between 0 - 10
    ///stack starts at index(counter) = 0, ends at index capacity-1

public:

    ///constructors
    Stack(int length);
    //pre: argument is positive
    //post: stack(array) is empty, capacity = length (->argument)

    ~Stack();
    //pre: none
    //post: memory deallocated

    void print();
    //pre: none
    //post: contents of stack is printed from top to bottom


    /// modifiers

    void push(double value);
    //pre: stack must NOT be full
    //post: argument is inserted as topmost

    double pop();
    //pre: stack must NOT be empty
    //post: return topmost value and remove it

    /// selectors

    double top();
    //pre: stack must NOT be empty
    //return topmost value

    int size();
    //pre: none
    //post: current number of elements is returned


    ///queries

    bool empty();
    //pre: none
    //return: true if stack is empty , false otherwise

    bool full();
    //pre: none
    //return true if stack is full, false  otherwise

};
