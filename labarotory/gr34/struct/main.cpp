#include <iostream>
#include <string>
#include "library.h"
using namespace std;


int main ()
{
    Sinfdosh a;
    a.name = "Nasiba";
    a.surname = "Abdiyeva";
    a.study = "preparing";
    a.place = "Qashqadaryo";
    a.age = 18;
    a.grade = 5.0;
    a.maritial = false;
    a.print();

    a.setSalary(+18);

    a.print();

}
