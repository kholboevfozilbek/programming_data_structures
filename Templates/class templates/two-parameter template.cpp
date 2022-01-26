
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int index;
    bool checkIndex(int _index); //internal method
public: //public interface

    Student(string _name="") { name = _name; }
    ~Student() = default;
    int getIndex() const { return index; } //getter
    void setIndex(int _index) {index = _index; }//setter

};

template<typename T, int size=10>
class Array
{
private:
    T* data = new T[size];

public:

    Array() = default;
    ~Array()
    {
        if ( size > 0 ) delete [] data;
    }
    int length()
    {
        return size;
    }

    T& operator[](int index)
    {
        return data[index];
    }
};

int main()
{
    Array<int, 5> t1;
    Array<float> t2;
    Array<Student, 3> qurbaqa_sostaf;

    qurbaqa_sostaf[0] = Student("Fozil");
    qurbaqa_sostaf[0].setIndex(1);
    qurbaqa_sostaf[1] = Student("Mansurjon");
    qurbaqa_sostaf[2] = Student("Sharif bobo");

    t1[0] = 7;
    t2[0] = 7.5;

    cout << "\nO'zimizzikilar:  ";
    for (int i=0; i<3; ++i)
    {
        cout << qurbaqa_sostaf[i].name << endl;
    }

    return 0;
}

