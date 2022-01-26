/// data structure interface

#include <cstdlib>
#include <cmath>
using namespace std;

struct Point
{
private:
    double x;
    double y;

public:
    Point();
    Point(double x, double y);

    /// getters && setters
    double getX() const;    /// selectors
    double getY() const;

    void setX(double new_x); /// modifiers
    void setY(double new_y);
    void set_Obj(double new_x, double new_y);

    double distance(const Point other);


    void print();
};

struct Line
{
private:
    double a;
    double b;

public:
    Line();
    Line(double a, double b);

    double distance_between(Point p);

    bool isOnline(Point p);
    void println();

};
