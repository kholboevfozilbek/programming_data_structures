
#ifndef SORTED_LIST_OF_OBJECTS KNOWN
#define SORTED_LIST_OF_OBJECTS KNOWN


#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

template<typename T>
class Sorted_List
{
    struct node{
       T data;
       node* next;
       node( T D, node* N=nullptr)
       {
           data = D;
           next = N;
       }
    };

    node* head  = nullptr;
    int counter = 0;

public:

    Sorted_List()= default;
    ~Sorted_List() { clear(); cout << "\nList is destroyed " << endl; }

    void push(T value);
    void pop();
    void clear();

    T top();
    int size() { return counter; }
    void print();

};

template<typename T>
void Sorted_List<T>::push(T value)
{
    node* pred = nullptr;
    node* succ = head;

    while(succ != nullptr && succ->data > value)
    {
        pred = succ;
        succ = succ->next;
    }

    node* n = new node(value, succ);

    if (pred == nullptr)
        head = n;
    else
        pred->next = n;

    ++counter;
}


template<typename T>
void Sorted_List<T>::pop()
{
    if ( counter == 0 )
        throw runtime_error("List is EMPTY, nothingto remove!");
    node* killer = head;

    head = head->next;

    delete killer;

    --counter;
}

template<typename T>
void Sorted_List<T>::clear()
{
    if ( counter > 0 )
    {
        node* killer;
        while(head != nullptr)
        {
            killer = head;

            head = head->next;

            delete killer;
        }
        counter = 0;
    }
}

template<typename T>
T Sorted_List<T>::top()
{
    if ( counter == 0 )
        throw runtime_error("List is EMPTY, nothing on the top!");
    return head->data;
}

template<typename T>
void Sorted_List<T>::print()
{
    if ( counter > 0 )
    {
        node* walker = head;

        while(walker != nullptr)
        {
            cout << walker->data << " -> ";
            walker = walker->next;
        }
        cout << " | " << endl;
    }
    else
        cout << "EMPTY !!! " << endl;
}


struct Student
{
private:

    string name;
    string surname;
    int ID_number;
    float grades[5] {0};
    float average;

public:

    Student() = default;
    ~Student() = default;

    string getName() { return name; }
    string getSurname () { return surname; }
    void setName(string N="") { name = N; }
    void setSurname(string S="") { surname = S; }

    void setAll(string N="", string S="", int I=0, float A=0) { name = N; surname = S; ID_number = I; average = A; }

    float getAvg() { return average; }
    int getID() { return ID_number; }

    bool operator> (Student o)
    {
        if (this->average > o.average)
            return true;
        return false;
    }

    friend ostream& operator<< (ostream &output, Student &o);
    //friend istream& operator>> (istream &input, Student &o);
};

ostream& operator<< (ostream &output, Student &o)
{
    output << "\nName: \t\t" << o.name << "\nSurname:\t" << o.surname << "\nID:\t\t" << o.ID_number << "\nAverage Grade:  " << o.average;
    return output;
}

/*istream& operator>> (istream &input, Student &o)
{
    input >> o.name;
    return input;
} */

#endif // SORTED_LIST_OF_OBJECTS
