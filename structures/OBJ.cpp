#include <iostream>
#include <string>
using namespace std;

struct Obj
{
    int a;
    int b;

    ///methods
    /// constructor
    Obj();
    Obj(int a, int b); /// 2-parameter constructor
    Obj(int a);        /// 1-parameter constructor
    Obj(const Obj &x);  /// copy constructor

    /// destructor
    ~Obj();
};

Obj::Obj(int _a, int _b)
{
    a = _a;
    b = _b;
    cout << "2-parameter constructor of object " << a << ", " << b << endl;
}

Obj::Obj(int _a)
{
    a = b = _a;
    cout << "1-parameter constructor of object " << a << ", " << b << endl;
}
Obj::Obj()
{
    a = 0;
    b = 0;
    cout << "Parameterless default constructor of object " << a << ", " << b << endl;
}

Obj::Obj(const Obj &x)
{
    a = x.a;
    b = x.b;
    cout << "Copy constructor of object " << a << ", " << b << endl;
}
Obj::~Obj()
{
    cout << "Destructor of object " << a << ", " << b << endl;
}

int main()
{
    cout << "Main start " << endl;
    {
        Obj x;
        Obj y(1, 3), z(5), u = y, v = {1, 2};
    }
    cout << "\nMain Stop " << endl;
    return 0;
}
