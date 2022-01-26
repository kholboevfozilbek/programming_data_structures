// main!

#include "vector_as_structure.h"


int main()
{
    Vector v1;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    print(v1);
    cout << "\nSize:  " << v1.size() << endl;
    v1.pop_back();

    cout << "First: " << v1.front() << endl; //1
    cout << "Last: " << v1.back() << endl; //4
    cout << "Size: " << v1.size() << endl; //4
    cout << "\nv1:  "; print(v1);

    //v1.clear();

    Vector v2 = v1;

    cout << "v2:  "; print(v2); //1 2 3 4
    cout << "\n\n\tv2: "; v2.push_back(6);
    v2.push_back(12);
    v2.push_back(20);
    print(v2);

    v1 = v2;

    if(v1 == v2)
        cout << "The vectors are equal." << endl; //yes

    cout << "\nv1:  "; print(v1);
    cout << "v2:  "; print(v2); //1 2 3 4

    v1.pop_back();
    cout << "\n\n v1 -> Last: " << v1.back() <<endl; //4
    print(v1); //1 2 3 4
    print(v2); //1 2 3 4 6

    v2.clear();
    cout << "\nv1:  "; print(v1);
    cout << "v2:  "; print(v2); //1 2 3 4
    return 0;
}
