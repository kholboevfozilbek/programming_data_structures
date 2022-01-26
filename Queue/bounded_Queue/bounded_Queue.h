///library

struct Queue
{
    int capacity = 0;
    int* data = nullptr;
    int _front = 0;
    int afterLast = 0;
    int counter = 0;

    /// constructors +-
    Queue(int length);

    Queue(const Queue &o );

    ~Queue();
    //pre: none
    //post: none

    ///modifiers

    void enque(int value);
    //pre: Queue must NOT be full
    //post: argument value is inserted as last element

    int deque();
    //pre: Queue must NOT be empty
    //post: first value is removed, size-1, first value is returned

    void clear();
    //pre: none
    //post: Queue is empty

    /// selectors

    int front() const;
    //pre: Queue must NOT be empty
    //post: current the first frontmost element is returned

    int back() const;
    //pre: Queue must NOT be empty
    //post: current last element in Queue is returned

    int size() const;
    //pre: none
    //post: current number of elements in Queue is returned

    void print();
    //pre: none
    //post: current contents of queue is printed

    /// queries

    bool empty() const;
    //pre: none
    //post: true if counter == 0, false otherwise is returned

    bool full() const;
    //pre: none
    //post: true if counter == capacity , false otherwise is returned

    /// operators

    Queue& operator= (const Queue &o );
    //pre: none
    //post: 2 obj are completely same!, return reference to Queue

    bool operator== (const Queue &o );
    //pre: none
    //post: true if 2 objects elements are same!
};


