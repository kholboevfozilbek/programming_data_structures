// library


class Stack
{

private:
    struct node{
        int data;
        node* next;
        node(int D, node* N=nullptr)
        {
            data = D; next = N;
        }
    };

    node* head = nullptr;
    node* tail = nullptr;
    int counter = 0;

public:

    Stack() = default;
    ~Stack();

    void push(int value);
    int pop();
    void clear();

    int top();
    int size();
    void print();

    bool empty();
    void smth();
};
