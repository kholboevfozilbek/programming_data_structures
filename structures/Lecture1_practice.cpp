#include <iostream>
#include <string>

using namespace std;

struct Obj /// abstract data type (class, structure)
{
    int a; /// Since C++11 its possible to initialize inside structure
    float b;  /// fields and members

    ///methods of the structure
    Obj(int _a=0, float _b=7.85);  ///constructor
    void setter(int _a, float _b); /// modifier setter;
    int getB() const ;             /// selector getter;

    /// default constructors
    //Obj(int _a=0, float b=0);
    //Obj();
    //Obj() = default;

    /// copy constructor
    Obj(const Obj &o);

    /// destructor
    ~Obj();

};

Obj::Obj(int _a, float _b)
{
    a = _a;
    b = _b;
}
Obj::Obj(const Obj &o)
{
    a = o.a;
    b = o.b;
}

Obj::~Obj()
{
    cout << " this object is destructed " << a << " " << b << endl;
}

/*Obj::Obj()
{
    a = 0;
    b = 0;
}*/
/*Obj::Obj(int _a=0, float b=0)
{
    a = _a;
    b = _b;
}*/

void Obj::setter(int _a, float _b)
{
    a = _a;
    b = _b;
}

int Obj::getB() const
{
    return b;
}

int main()
{
    {
        Obj x; x.setter(3, 5.5);
        Obj y(x);
        Obj z = x;   /// implicit copy constructor calls

        //cout << "y.b copy = " << y.b << endl;
        //cout << "z.a copy = " << z.a << endl;

        Obj f(1, 2);
        Obj v = 3;
        //Obj t[5];  /// array of objects -> all elements got default values from constructor

        Obj *s = new Obj; /// dynamically allocated object
        //Obj *p = new Obj[3]; /// dynamic array of objects
        delete s;
    }

    return 0;
}
