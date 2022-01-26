
template<typename T>
class Queue
{

private:

    struct node{
        T data;
        node* next;
        node(T D, node* N=nullptr)
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

    T enque(T value);
    T deque();
    void clear();

    T front();
    T back();
    int size() { return counter; }
    void print();

    bool empty() { return ( counter == 0); }
    Queue& operator= (const Queue &o);
};

template<typename T>
Queue<T>::~Queue()
{
    clear();
    cout << "\n\nunbounded queue is destroyed " << endl;
}

template<typename T>
T Queue<T>::enque(T value)
{
    if ( head == nullptr )
    {
        node* n = new node(value);
        head = n;
        tail = n;
    }
    else
    {
        node* n = new node(value);
        tail->next = n;
        tail = n;
    }
    ++counter;
}

template<typename T>
T Queue<T>::deque()
{
    if ( counter == 0 )
        throw runtime_error("Queue is empty, nothing to remove!");

    T result = head->data;
    node* killer = head;
    head = head->next;

    if (head == nullptr)
        tail = nullptr;

    delete killer;
    --counter;
    return result;
}

template<typename T>
void Queue<T>::clear()
{
    if (counter > 0)
    {
        while(head != nullptr)
        {
            node* killer = head;
            head = head->next;
            delete killer;
        }
        tail = nullptr;
        counter = 0;
    }
}

template<typename T>
T Queue<T>::front()
{
    if (head == nullptr)
        throw logic_error("Queue is Empty, nothing on the front!");

    return head->data;
}

template<typename T>
T Queue<T>::back()
{
    if (head == nullptr)
        throw logic_error("Queue is Empty, nothing on the back!");

    return tail->data;
}

template<typename T>
void Queue<T>::print()
{
    if ( counter > 0 )
    {

    }
    else
        cout << " EMPTY!!! " << endl;
}

