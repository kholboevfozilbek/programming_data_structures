///ADT, structure interface

#ifndef BOUNDED_LIB_H KNOWN
#define BOUNDED_LIB_H KNOWN

struct Stack
{

private:
    int capacity = 0;
    float* data  = nullptr;
    int counter  = 0;

    // invariants
    // counter is between 0 -> 10
    // data is dynamic array which is allocated during runtime
    //size, length of the array is -> capacity

public:
    ///constructor
    Stack(int length=10);
    //pre: length(argument) must be positive
    //post: dynamic array with size -> length (as parameter), capacity = length, stack(array) is empty

    ///copy constructor
    Stack(const Stack &st);
    //pre: none
    //post: new stack is dynamically allocated exactly same as parameter

    ///destructor
    ~Stack();
    //pre: none
    //post: none



    ///modifiers

    void push(int value);
    //pre: stack must NOT be full
    //post: taken value is the inserted as topmost element

    float pop();
    //pre: stack must NOt be empty
    //post: return topmost value, remove that value from our stack

    void clear();
    //pre: none
    //post: stack is empty, counter == 0

    /// selectors
    float top() const;
    //pre: stack must NOT be empty
    //post: return current topmost element

    void print() const;
    //pre: none                           top
    //post: contents of stack is printed  bottom

    int size() const;
    //pre: none
    //return current number of elements


    /// queries
    bool empty();
    //pre: none
    //post: return true if counter == 0 (empty) , false otherwise

    /// operators
    Stack& operator= (const Stack &st);
    bool operator== (const Stack &st);

};

#endif // BOUNDED_LIB_H
