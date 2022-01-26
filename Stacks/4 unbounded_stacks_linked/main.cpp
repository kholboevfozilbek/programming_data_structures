

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



};
