
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

struct Footballer
{
private:

    string name;
    string surname;
    int number;
    float height;
    float speed;
    float shoot;
    double stamina;
    string club;
    string position;

public:

    Footballer() = default;
    void setAll(string N="", string S="", int Nu=0, float H=0, float SP=0, float SH=0, double STA=0, string C="", string P="")
    {
        name = N; surname = S; number = Nu; height = H; speed = SP; shoot = SH; stamina = STA; club = C; position = P;
    }

    string getname() {return name; }
    string getsurname() {return surname; }
    int getN() { return number; }
    string getclub() {return club; }
    string getposition() {return position; }

    void getAll()
    {
        cout << endl;
        cout << "Name:  "; cin >> name;
        cout << "Surname:  "; cin >> surname;
        cout << "Number:  "; cin >> number;
        cout << "Height:  "; cin >> height;
        cout << "Speed:   "; cin >> speed;
        cout << "Shoot:   "; cin >> shoot;
        cout << "Club:    "; cin >> club;
        cout << "Position: "; cin >> position;
    }

    friend ostream& operator<< ( ostream& output, const Footballer &o );
    bool operator!= ( const Footballer &o)
    {
        if (name == o.name && surname == o.surname && number == o.number && height ==  o.height && speed == o.speed && shoot == o.shoot && club == o.club && position == o.position)
            return false;
        return true;
    }
};

ostream& operator<< ( ostream& output, const Footballer &o )
{
    output << "\nName:\t" << o.name << "\nSurname: " << o.surname << "\nNumber:\t" << o.number <<
            "\nHeight:\t" << o.height << "\nSpeed:\t" << o.speed <<  "\nShoot:\t" << o.shoot <<
            "\nClub:\t" << o.club << "\nPosition: " << o.position;
    return output;
}

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

    void enque(T value);
    T deque();
    void clear();

    T front();
    T back();
    int size() { return counter; }
    void print();

    bool empty() { return ( counter == 0); }
    Queue& operator= (const Queue &o);
    bool operator== (const Queue &o);
};

template<typename T>
Queue<T>::~Queue()
{
    clear();
    cout << "\n\nunbounded queue is destroyed " << endl << endl;
}

template<typename T>
Queue<T>::Queue (const Queue<T> &o)
{
    node* walker = o.head;

    while(walker != nullptr)
    {
        enque(walker->data);
        walker = walker->next;
    }
}

template<typename T>
void Queue<T>::enque(T value)
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
        node* walker = head;

        while(walker != nullptr)
        {
            cout << walker->data << endl << endl;
            walker = walker->next;
        }
        cout << " | " << endl;
    }
    else
        cout << " EMPTY!!! " << endl;
}

template<typename T>
Queue<T>& Queue<T>::operator= (const Queue<T> &o)
{
    clear();

    node* walker = o.head;

    while(walker != nullptr)
    {
        enque(walker->data);
        walker = walker->next;
    }

    return *this;
}

template<typename T>
bool Queue<T>::operator== (const Queue<T> &o)
{
    if ( counter == o.counter)
    {
        node* w1 = head;
        node* w2 = o.head;

        while(w1 != nullptr)
        {
            if (w1->data != w2->data)
                return false;
            w1 = w1->next;
            w2 = w2->next;
        }
        return true;
    }
    else
        return false;
}

