//library


class List
{
private:

    struct node{
        int data;
        node* next;
        node(int input, node* N=nullptr)
        {
            data = input; next = N;
        }
    };

    node* head;
    node* tail;
    node* curr;
    int counter;

public:

    List();
    ~List();
    List(const List &o);
    void add(int value);
    int remove_data();

    List& operator= (const List &o);
    bool operator== (const List &o);


};
