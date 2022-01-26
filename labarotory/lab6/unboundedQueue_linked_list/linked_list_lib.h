// library!

class Queue
{

private:

    struct node{
        float data;
        node* next;
        node(float D, node* N=nullptr)
        {
            data = D; next = N;
        }
    };

    node* head = nullptr;
    node* tail = nullptr;
    int counter = 0;

public:

    Queue() = default;
    ~Queue();
    Queue(const Queue &o);

    void enque(float value);
    float deque();
    void clear();

    float front();
    float back();
    int size();
    void print();

    bool empty();
    Queue& operator= (const Queue &o);
};

