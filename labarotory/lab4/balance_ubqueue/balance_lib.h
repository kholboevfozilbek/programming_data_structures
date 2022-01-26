//library


struct Ubqueue
{
private:

    int capacity=3;
    int* data = nullptr;
    int _front = 0;
    int afterLast = 0;
    int counter = 0;

public:

    Ubqueue();
    ~Ubqueue();
    Ubqueue(const Ubqueue &o);

    void enque(int value);
    int deque();
    void clear();

    int front();
    int back();
    int size();
    int index_front();
    int index_back();
    int curr_capacity();
    void print();

    bool empty();

    Ubqueue& operator= (const Ubqueue &o );
    bool operator== (const Ubqueue &o );
};
