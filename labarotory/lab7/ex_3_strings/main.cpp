

class Vector
{
private:

    int capacity = 1;
    char* data = nullptr;
    int counter = 0;

public:

    Vector();
    ~Vector();
    void push_back(char sign);
};

Vector::Vector()
{
    data = new char[capacity];
}

Vector::~Vector()
{
    delete [] data;
}

void Vector::push_back(char sign)
{
    if ( counter == capacity )
    {
        char* temp = new char[capacity*2];
        capacity *= 2;

        for (int i=0; i<counter; ++i)
        {
            temp[i] = data[i];
        }

        delete [] data;
        data = temp;
    }

    data[counter] = sign;
    ++counter;
}
