/// library

class Stack
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
        int counter = 0 ;

public:
        Stack() = default;
        ~Stack();
        Stack(const Stack &o);

        void push(int value);
        float pop();
        void clear();
        void insert_at_end(float value);

        float top();
        int size();
        void print();
        node* heads(){
        return head;
        }

        bool empty();

        Stack& operator= (const Stack &o);
        bool operator== (const Stack &o);
};
