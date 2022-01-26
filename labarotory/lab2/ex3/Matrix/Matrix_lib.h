/// data structure interface
#include <stdexcept>
#include <iostream>
using namespace std;

struct Matrix
{
private:
    int length;
    int **arr;

public:
    Matrix(int N);
    void intake();
    void Initialize();

    ~Matrix()
    {
        for(int i=0; i<this->length; ++i)
        {
            delete [] arr[i];
        }

        delete [] arr;
    }

    Matrix operator + (const Matrix &sec_matrix)
    {
        Matrix sum(this->length); // call of our constructor

        for(int i=0; i<this->length; ++i)
        {
            for(int j=0; j<this->length; ++j)
            {
                sum.arr[i][j] = this->arr[i][j] + sec_matrix.arr[i][j];
            }
        }
        return sum;
    }

    friend ostream& operator << (ostream &output, const Matrix &v);
};
