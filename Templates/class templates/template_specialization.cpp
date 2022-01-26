
#include <iostream>
using namespace std;

template<typename T>
class Container
{
private:
    T element;

public:

    Container( T arg)
    {
        element = arg;
    }

    T increase();

};

// template specialization

template<>
class Container <char>
{
    char element;

public:
    Container( char arg)
    {
        element = arg;
    }
    char Uppercase();
};

char Container<char>::Uppercase()
{
    if ((element>='a')&&(element<='z'))
        element+='A'-'a';
    return element;
}
template<typename T>
T Container<T>::increase()
{
    ++element;
    return element;
}

int main()
{
    Container<int> integer(5);
    Container<char> mychar('f');
    cout << integer.increase() << endl;
    cout << mychar.Uppercase() << endl;
    return 0;
}
