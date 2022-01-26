

class Vector
{
private:
    int* data = nullptr;
    int capacity = 1;
    int counter = 0;

public:
    Vector();
    ~Vector();
    Vector(const Vector &o);

    void push_back(int value);
    void pop_back();
    void clear() { counter = 0; }

    int front();
    int back();
    int size() { return counter; }

    bool empty() { return (counter == 0 );}

    Vector& operator= (const Vector &o);
    bool operator== (const Vector &o);
    int& operator[] (int index);
};


