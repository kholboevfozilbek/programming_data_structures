// library

class Queue
{
private:

    struct node
    {
        double data;
        node* next;
        node(double value, node* N=nullptr)
        {
            data = value;
            next = N;
        }
    };

    node* head;
    node* tail;
    int counter;

public:

    Queue();
    ~Queue();
    Queue( Queue &o);

    void enque(double value);
    double deque();
    void clear();

    double front();
    double back();
    int size();
    void print();

    bool empty();
};



