#include <iostream>

using namespace std;


int main()
{
    int nights = 1001;

    int* pt = new int;
    *pt = 2002;

    cout << "nights value: " << nights << " | location:  " << &nights << endl;

    cout << "int value:  " << *pt << " | location =  " << pt << endl;
    cout << "sizeof pt " << sizeof(pt) << endl;
    cout << "sizeof *pt = " << sizeof(*pt) << endl;

    double* pd = new double;
    *pd = 100000001.123;

    cout << "double value: " << *pd << " | location = " << pd << endl;
    cout << "address of double* " << &pd << endl;
    cout << "sizeof pd = " << sizeof(pd) << endl;
    cout << "sizeof *pd: " << sizeof(*pd) << endl;

    float* pf = new float;
    *pf = 123.321;

    cout << "float value: " << *pf << " | location = " << pf << endl;
    cout << "address of pf" << &pf << endl;
    cout << "sizeof pf " << sizeof(pf) << endl;
    cout << "sizeof *pf " <<sizeof(*pf) << endl;

    bool* pb = new bool;
    *pb = true;

    cout << "\nbool value: " << *pb << " -> location: " << pb <<endl;
    cout << "sizeof pb " << sizeof(pb) << endl;
    cout << "sizeof *pb = " << sizeof(*pb) << endl;

    char* pc = new char;
    *pc = 'F';

    cout << "\nchar value: " << *pc << " -> address: " << pc << endl;
    cout << "address of pc= " << &pc << endl;
    cout << "sizeof pc " << sizeof(pc) << endl;
    cout << "sizeof *pc " << sizeof(*pc) << endl;

    return 0;
}
