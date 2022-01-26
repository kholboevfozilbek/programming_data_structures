/// public part

#include <string>
using namespace std;

struct Student
{
    string name;
    string surname;
    int index_number;
    float marks[50] = { 0 };


    ///methods of the structure
    Student(string N="", string S="", int I=0);

    /// setters and getters
    void setName(string new_N);
    string getName();

    void setSurname(string new_S);
    string getSurname();

    void set_Index(int new_I);
    int get_Index();

    void addMark(int nechinchi, float G);
    float avvGrade(Student x);

    void print();
};
