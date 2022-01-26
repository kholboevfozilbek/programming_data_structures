

#include <iostream>
#include "Sorted_LIst_Of_Objects.h"
#include <string>

using namespace std;

int main()
{
    Sorted_List<Student> s1;

    Student math[5];

    int i=0;
    cout << "\nEnter students:  " << endl;
    while( i < 5)
    {
        cout << i+1 << ". \n";
        cin >> math[i];
        ++i;
        s1.push(math[i]);
    }



    cout << "\nStudents we have:  \n";
    s1.print();
    return 0;
}
