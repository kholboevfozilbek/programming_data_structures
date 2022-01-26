/// implementation of methods (member functions)

#include <iostream>
#include "Matrix_lib.h"
using namespace std;


Matrix::Matrix(int N)
{
        if ( N < 0 ) throw logic_error("Negative length of the 2D array!!!");

        this->length = N;
        arr = new int*[length];

        for(int i=0; i<this->length; ++i)
        {
            arr[i] = new int [length];   /// each column in size of length because this is square rows=columns
        }

}

void Matrix::Initialize()
{
        for(int i=0; i<this->length; ++i)
        {
            for(int j=0; j<this->length; ++j)
                arr[i][j] = 0;
        }
}

ostream& operator << (ostream &output, const Matrix &v)
{
    output << endl;
        for(int i=0; i<v.length; ++i)
        {
            for(int j=0; j<v.length; ++j)
                output << "\t" << v.arr[i][j];
            output << endl;
            output << endl;
        }
        return output;
}
 void Matrix::intake()
{
        cout << "\n\nWe have " << this->length << "*" << this->length << "=" <<
        length*length << " elements in the array: \nEnter those elements\n" <<endl;

        for(int i=0; i<this->length; ++i)
        {
            for(int j=0; j<this->length; ++j)
            {
                cout << "arr["<<i<<"]"<<"["<<j<<"]: "; cin >> this->arr[i][j];
            }
        }
}
