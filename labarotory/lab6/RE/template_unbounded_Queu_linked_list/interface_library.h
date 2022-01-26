


#include <iostream>
#include <stdexcept>
using namespace std;

template<typename T>
class Queue
{
private:

    struct node {
        T data;
        node* next;
        node(T D, node* N=nullptr)
        {
            data = D;
            next = N;
        }
    };

    node* head = nullptr;
    node* tail = nullptr;
    int counter = 0;

public:

    Queue() = default;
    ~Queue();
    Queue(const Queue &o);

    void enque(T value);
    T dequeue();
    void clear();

    void print();
    T front();
    T back();
    int size() { return counter; }

    bool empty() { return (counter == 0); }

    Queue& operator= (const Queue &o);
    bool operator== (const Queue &o);
};

template<typename T>
Queue<T>::~Queue()
{
    clear();
    cout << "unbounded Queue is destroyed " << endl;
}

template<typename T>
void Queue<T>::enque(T value)
{
    node* n = new node(value);

    if (head == nullptr)
    {
        head = n;
        tail = n;
    }
    else
    {
        tail->next = n;
        tail = n;
    }

    ++counter;
}


template<typename T>
void Queue<T>::print()
{
    if (counter > 0 )
    {
        node* walker = head;

        while (walker != nullptr)
        {
            cout << walker->data << " -> ";
            walker = walker->next;
        }
        cout << " | " << endl;
    }
    else
        cout << "Empty!!" << endl;
}

template<typename T>
T Queue<T>::dequeue()
{
    if (counter == 0)
        throw runtime_error("Queue is EMPTY, nothing to remove!");
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
    if (head  != nullptr)
    {
        node* killer;

        while(head != nullptr)
        {
            killer = head;
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
    if (counter == 0)
        throw logic_error("Queue is EMPTY, nothin on the front!");
    return head->data;
}

template<typename T>
T Queue<T>::back()
{
    if (counter == 0)
        throw logic_error("Queue is EMPTY, nothin on the back!");
    return tail->data;
}



struct Footballer
{
private:
    string name;
    string surname;
    int Number;
    string position;
    string club;
    float  height;
    double weight;
    double salary;

public:
    void setAll(string N, string S, int Num, string P, string C, float H, double W, double Mon)
        { name = N, surname = S; Number = Num; position = P; club = C; height = H; weight=W; salary=Mon;}
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Surname:  " << surname << endl;
        cout << "Number: " << Number << endl;
        cout << "Position: " << position << endl;
        cout << "Club: " << club << endl;
        cout << "Salary: " << salary << endl;
    }

    friend bool operator!= (const Footballer &o1, const Footballer &o);
    friend ostream& operator<<(ostream &output, const Footballer &o);
};

ostream& operator<<(ostream &output, const Footballer &o)
{
    output << "\nName: " << o.name << endl << "Surname:  " << o.surname << endl << "Number: " << o.Number << endl <<"Position: " << o.position << endl;
    output << "Club:  " << o.club << endl << "Salary:  " << o.salary << endl;
    return output;
}

bool operator!= (const Footballer &o1, const Footballer &o)
{
    if (o1.name == o.name && o1.surname == o.name && o1.Number == o.Number && o1.position == o.position && o1.club == o.club)
        return true;
    else
        return false;
}




