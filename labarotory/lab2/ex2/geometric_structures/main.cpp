
#include <iostream>
#include "geometric_lib.h"
using namespace std;

int main()
{
    Point A;
    A.print(); cout << endl;
    A.set_Obj(2, 3);
    cout << "A("; A.print(); cout << ") " << endl;
    cout << "x coordinate of point A->" << A.getX() << endl;
    cout << "y coordinate of point A->" << A.getY() << endl;
    A.setY(5); A.setX(1);
    cout << "Change in values of point A "; A.print(); cout << endl;

    A.set_Obj(2, 2); Point B(-2, -3);

    double dist = A.distance(B);

    cout << "\nDistance between two points A("; A.print(); cout <<") and B("; B.print(); cout <<") is : " << dist << endl;


    A.set_Obj(2, 5);
    Line line(3, 1); // y = 3x - 4 -> my Line is in this format
    cout << "Line a("; line.println(); cout << ") in form y = 3x -4 "<< endl;
    cout << "Distance between Point A"; A.print(); cout << " and Line"; line.println(); cout << " is " << line.distance_between(A) << endl;

    if (line.isOnline(A) == true)
        cout << "Yes point is on The Line !!!";
    else
        cout << "No point is NOT on the line";


    return 0;
}
