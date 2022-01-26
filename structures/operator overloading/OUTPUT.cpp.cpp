#include <iostream>
using namespace std;

class Test
{
    int x;

public:
    Test(int _x = 0)
    {
        x = _x;
    }
    friend istream& operator >> (istream& input, Test& obj);
    friend ostream& operator << (ostream& output, const Test& obj);
};

istream& operator >> (istream& input, Test& obj)
{
        input >> obj.x;
        return input;
}

ostream& operator << (ostream& output, const Test& obj)
{
    output << obj.x << endl;
    return output;
}

int main()
{
    Test t;
    cin >> t;
    cout << t;
    return 0;
}
