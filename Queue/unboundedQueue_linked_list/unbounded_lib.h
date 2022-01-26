

class Queue
{

private:

    struct node{
        int data;
        node* next;
        node(int value, node* N=nullptr)
        {
            data = value; next = N;
        }
    };

    node* head = nullptr;
    node* tail = nullptr;
    int counter = 0;

public:

    Queue() = default;
    ~Queue();

    void enque(int value);
    void print();
};

