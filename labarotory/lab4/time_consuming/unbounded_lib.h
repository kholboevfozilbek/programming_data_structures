///library

struct Ubqueue
{

    float* data;
    int counter;

public:

    Ubqueue();

    ~Ubqueue();

    Ubqueue(const Ubqueue &o);

    void enque(int value);

    float deque();

    float front();

    float back();

    void print();

    bool empty();

    int size();

    void clear();

    Ubqueue& operator= (const Ubqueue &o);

    bool operator== (const Ubqueue &o);

};
