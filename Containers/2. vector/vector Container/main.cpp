

#include <iostream>
#include "vector_container.h"

using namespace std;

template<typename T>
void print(Vector<T> &o)
{
    if (o.size() > 0)
    {
        for(size_t i = 0; i<o.size(); ++i)
            cout << o[i] << "  ";
        cout << endl;
    }
    else
        cout << "Empty!!" << endl;
}

int main()
{
    Vector<int> uni;

    uni.push_back(4);
    uni.push_back(7);
    uni.push_back(9);
    uni.push_back(11);
    uni.push_back(2);

    cout << "Vector:  "; print(&uni);
    return 0;
}