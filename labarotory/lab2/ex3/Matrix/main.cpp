

#include <iostream>
#include "Matrix_lib.h"
using namespace std;

int main()
{
    int N;
    cout << "Enter size of square matrix: "; cin >>N;

    Matrix M(N);
    M.Initialize();
    //M.print();
    M.intake();
    //M.print();

    Matrix I(N);
    I.intake();
    //I.print();

    Matrix Sum = M + I;
    cout << "\n\nRes2ult of sum of the two matrixes\n";
    cout << Sum << endl;
    return 0;
}
