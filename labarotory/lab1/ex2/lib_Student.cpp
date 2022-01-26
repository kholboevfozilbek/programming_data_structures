/// non-public part -> implementation, definition of methods


#include <iostream>
#include <stdexcept>
#include "lib_Student.h"
using namespace std;

Student::Student(string N, string S, int I)
{
    name = N;
    surname = S;
    if (I < 0) throw logic_error("Negative index! Wrong!!!");
    index_number = I;

}

void Student::print()
{
    cout << "Name:  " << name << endl;
    cout << "Surname:  " << surname << endl;
    cout << "Index:  " << index_number << endl;
    cout << "Marks:  " ;

    for(int i=0; marks[i] != 0; ++i)
        cout << marks[i] << " ";
}

void Student::setName(string new_N)
{
    name = new_N;
}
string Student::getName()
{
    return name;
}

void Student::setSurname(string new_S)
{
    surname = new_S;
}
string Student::getSurname()
{
    return surname;
}

void Student::set_Index(int new_I)
{
    if(new_I < 0) throw logic_error("Negative index! Wrong!!!");
    index_number = new_I;
}
int Student::get_Index()
{
    return index_number;
}
void Student::addMark(int nechinchi, float G)
{
    if (G < 2 || G > 5) throw logic_error("Wrong Mark is entered!");

    if (nechinchi < 0 || nechinchi > 50) throw logic_error("Invalid number of index is shown!!");
    marks[nechinchi-1] = G;
}
float Student::avvGrade(Student x)
{
    float sum=0;
    int counter=0;

    for(int i=0; x.marks[i] != 0; ++i)
    {
        sum += x.marks[i];
        ++counter;
    }
    return sum/counter;
}
