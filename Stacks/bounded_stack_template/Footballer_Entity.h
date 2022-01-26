
#ifndef FOOTBALLER_ENTITY_H KNOWN
#define FOOTBALLER_ENTITY_H KNOWN


#include <string>
using namespace std;

struct Footballer
    {
        string name;
        string surname;
        int number;
        string position;
        string club;
        float height;
    public:

        Footballer(string N="", string S="", int Num=0, string P="", string C="", float H=0);
        ~Footballer() = default;

        void set_All(string N, string S, int Num, string P, string C, float H);
        void print();

};

Footballer::Footballer(string N, string S, int Num, string P, string C, float H)
{
    name = N;
    surname = S;
    number = Num;
    position = P;
    club = C;
    height = H;
}

void Footballer::print()
{
    cout << "Name:  " << name;
    cout << "Surname:  " << surname << endl;
    cout << "Number:  " << number << endl;
    cout << "Position:  " << position << endl;
    cout << "Club:  " << club << endl;
    cout << "Height:  " << height << endl;
}

void Footballer::set_All(string N, string S, int Num, string P, string C, float H)
{
    name = N;
    surname = S;
    number = Num;
    position = P;
    club = C;
    height = H;
}


#endif // FOOTBALLER_ENTITY_H
