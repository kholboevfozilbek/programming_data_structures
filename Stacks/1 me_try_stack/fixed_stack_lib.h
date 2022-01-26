/// ADT, structure interface


struct Stack
{

private:
    static const int capacity=10;
    int data[capacity];
    int counter=0; // curr number of elements

    /// invariants
    /// -> counter is between 0 -> 10
    /// -> fixed so capacity never changes


public:

    /// constructors
    Stack() = default;
    //pre: none
    //post: by default stack is empty at creation

    Stack(const Stack&) = default;
    //pre: none
    //post: new stack is copy of another(argument)

    ~Stack() = default;
    //pre: none
    //post: none

    void print();


    /// modifier
    void push(int value);
    //pre: stack must NOT be full
    //post: argument value is topmost


    int pop();
    //pre: stack must NOT be empty
    //post: top value is removed, size - 1
    /// return top value

    void clear();
    //pre: none
    //post: stack must BE empty



    /// selectors
    int top();
    //pre: stack must NOT be empty
    //post: return topmost value in stack

    int size() const;
    //pre: none
    //post: current number of elements is returned


    /// queries

    bool empty() const;
    //pre: none
    //post: -> true if stack is empty, false otherwise


    /// operators
    Stack& operator= (const Stack&) = default;
    //pre: none
    //post: copy of the argument

    bool operator== (const Stack &o) const;
    //pre: none
    //post: true if s1 = s2 , false otherwise

};
