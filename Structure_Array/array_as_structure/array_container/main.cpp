
#include <iostream>
#include "container_array.h"
using namespace std;

void print(Array &o)
{
    if (o.length() > 0) {
        for (int i=0; o[i]!= 0; ++i)
        {
            cout << o[i] << "  ";
        }
        cout << endl; }
    else
        cout << " EMPTY!! " << endl;

}

int main()
{
    Array salary(5);
    salary[0] = 7;
    salary[1] = 13;
    print(salary);

    return 0;
}
