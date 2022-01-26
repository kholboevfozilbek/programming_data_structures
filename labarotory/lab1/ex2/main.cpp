/// main file

#include <iostream>
#include <string>
#include "lib_Student.h"
using namespace std;


int main()
{
    Student Mansur;
    Mansur.name = "Mansurjon";
    Mansur.surname = "Zokirjonov";
    Mansur.index_number = 26534;
    Mansur.print();
    Mansur.set_Index(33333);
    cout << endl;

    Student S1("Muminjon", "Siddikov", 3216);
    S1.print();
    cout << endl;

    cout << S1.getName() << endl;
    S1.setSurname("Siddiqjonov");
    cout << S1.getSurname() << endl;
    S1.set_Index(1234);
    cout << S1.get_Index() << endl;
    S1.addMark(1, 3);
    S1.addMark(2, 5);
    S1.addMark(3, 4.5);
    cout << endl;

    S1.print();
    cout << "\nAvearge grade: " << S1.avvGrade(S1) << endl;
    return 0;
}
