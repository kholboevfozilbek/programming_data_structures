#include <iostream>
#include <stdexcept>
#include "lib_frac.h"
using namespace std;

Fraction::Fraction()
{
    num = 0;
    denom = 1;  /// 0/1 = 0 default initialize to 0
}

Fraction::Fraction(int N, int D)
{
/// 4/0 -> check whether all data is correct
    if (D == 0) throw logic_error("DENOMINATOR BEING 0 IS NOT ALLOWED!");
    num = N;
    denom = D;

    /// 2 3->2/3  -2 3->-2/3  2 -3->2/-3 -2 -3->-2/-3
    if (D < 0)
    {
        num = -num;
        denom = -denom;
    }
}

void Fraction::print()
{
    cout << num << "/" << denom << "  ";
}

int Fraction::getNum()
{
    return num;
}
int Fraction::getDenom()
{
    return denom;
}
void Fraction::setNum(int N)
{
    num = N;
}

void Fraction::setDenom(int D)
{
    if (D == 0) throw logic_error("DENOMINATOR BEING 0 IS NOT ALLOWED!");
    {
    }

    if (D < 0)
    {
        num = -num;
        denom = -denom;
    }
}

int GCD(int a, int b)  /// visible in this file only!!
{
    /// ... ...
}


void Fraction::shorten()
{
    /// 20 / 30  --> 2/3  ..etc
    int d = GCD(abs(num), denom)
}

bool operator==(Fraction x)
{
    /// 27/45   30/50
    shorten();
    x.shorten();

    if (num == x.num && denom == x.denom)
    {

    }
}
