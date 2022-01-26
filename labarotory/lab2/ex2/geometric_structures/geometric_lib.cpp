/// implementation of methods

#include <iostream>
#include <cmath>
#include "geometric_lib.h"
using namespace std;

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(double _x, double _y)
{
    x = _x;
    y = _y;
}

double Point::getX() const
{
    return x;
}
double Point::getY() const
{
    return y;
}

void Point::setX(double new_x)
{
    x = new_x;
}

void Point::setY(double new_y)
{
    y = new_y;
}

void Point::set_Obj(double new_x, double new_y)
{
    x = new_x;
    y = new_y;
}

double Point::distance(const Point other)
{
    return sqrt( pow((other.x - this->x), 2) + pow((other.y - this->y), 2) );
}


void Point::print()
{
    cout << x << ", " << y;
}

/// structure LINE

Line::Line()
{
    a = 0;
    b = 0;
}

Line::Line(double a, double b)
{
    this->a = a;
    this->b = b;
}

double Line::distance_between(Point p)
{
        /// our line must be in standard form  ax + b + c = 0
        /// in this case our line is in form y = ax + b so I need convert this into standard form
        //  y = 3x - 4   ||  -ax + y - c = 0       here x and y is our point loaded as Parameter p

        this->a = -a;
        this->b = 1;    /// -3x + y + 4 = 0;
        double c = -b;

        return abs((this->a * p.getX()) + (this->b * p.getY()) + c) / sqrt(pow(this->a, 2) + pow(this->b, 2));
}

bool Line::isOnline(Point p)
{
        // x= 2    y= 5
        // y = ax - b -> in this format I need to plug mp Points coordinates, if they match
        // it means my point in On the line!

        /// 5 = 3 * 2 - 1

       if (p.getY() == ((this->a * p.getX()) - this->b))
            return true;
       return false;

}

void Line::println()
{
    cout << this->a << ", " << this->b;
}
