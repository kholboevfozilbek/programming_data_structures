/// implementation of methods
#include <iostream>
#include <stdexcept>
#include "frac_lib.h"
using namespace std;

Fraction::Fraction()
{
    num = 0;
    denom = 1;   /// 0/1 -> zero fraction
}

Fraction::Fraction(int N, int D)
{
    if(D == 0) throw logic_error("Incorrect value for the denominator");
    num = N;
    denom = D;

    if ( D < 0 )
    {
        num = -num;
        denom = -denom;
    }
}

int Fraction::set_OBj(int N, int D)
{
    num = N;
    if ( D == 0 ) throw logic_error("Incorrect value tried to modify for denominator!");
    denom = D;

    if ( D < 0)
    {
        denom = -denom;
        num = -num;
    }

}

int Fraction::getNum() const
{
    return num;
}
int Fraction::getDenom() const /// to make sure that it is for read-only purposes
{
    return denom;
}

void Fraction::setNum(int N)
{
    num = N;
}
void Fraction::setDenom(int D)
{
    if ( D == 0 ) throw logic_error("Incorrect value tried to modify for denominator!");
    denom = D;

    if ( D < 0)
    {
        denom = -denom;
        num = -num;
    }
}

int Fraction::GCD(int a, int b)
{
        int x, y;
        x = a; y = b;

        while( x != y)
        {
            if (x > y)
                x = x - y;
            else
                y = y - x;
        }
        return x;
}

int Fraction::LCM(int f1_denom /*a*/ , int f2_denom /*b*/)
{
        return ( f1_denom * f2_denom ) / GCD(f1_denom, f2_denom);
}


void Fraction::print()
{
    cout << num << "/" << denom << " ";
}

/// implementation of the operator overloading
Fraction Fraction::operator + (const Fraction f2)
{
       Fraction sum;
       int umumiy_maxraj = LCM(denom, f2.denom);
       int f1_x = umumiy_maxraj/denom;
       int f2_x = umumiy_maxraj/f2.denom;
       sum.num = (num*f1_x) + (f2.num*f2_x);
       sum.denom = umumiy_maxraj;
       return sum;
}

Fraction Fraction::operator - (const Fraction f2)
{
        Fraction ayirma;
        int umumiy_maxraj = LCM(denom, f2.denom);
        int f1_x = umumiy_maxraj/denom;
        int f2_X = umumiy_maxraj/f2.denom;
        ayirma.num = (num*f1_x) - (f2.num*f2_X);
        ayirma.denom = umumiy_maxraj;
        return ayirma;
}

Fraction Fraction::operator * (const Fraction f2)
{
        Fraction mult;
        mult.num = num * f2.num;
        mult.denom = denom * f2.denom;

        int gcd = GCD(mult.num, mult.denom);

        mult.num = mult.num / gcd;
        mult.denom = mult.denom / gcd;

        return mult;
}
Fraction Fraction::operator / ( const Fraction f2)
{
        Fraction bolinma, temp, f1;
        f1.num = num;
        f1.denom = denom;
        temp.num = f2.denom;
        temp.denom = f2.num;

        bolinma = f1 * temp;

        int gcd = GCD(bolinma.num, bolinma.denom);
        bolinma.num = bolinma.num / gcd;
        bolinma.denom = bolinma.denom / gcd;

        return bolinma;                          /// /= you can try this shortcut operators

}
bool Fraction::operator == (const Fraction f2)
{
        int new_top1 = num * f2.denom;
        int new_top2 = denom * f2.num;

        if ( new_top1 == new_top2)
            return true;
        return false;
}

bool Fraction::operator != (const Fraction f2)
{
        int new_top1 = num * f2.denom;
        int new_top2 = denom * f2.num;

        if (new_top1 != new_top2)
            return true;
        return false;
}

 bool Fraction::operator > (const Fraction f2)
{
        int new_top1 = num * f2.denom;
        int new_top2 = denom * f2.num;

        if ( new_top1 > new_top2 )
            return true;
        return false;
}
bool Fraction::operator < (const Fraction f2)
{
        int new_top1 = num * f2.denom;
        int new_top2 = denom * f2.num;

        if (new_top1 < new_top2)
            return true;
        return false;
}

bool Fraction::operator >= (const Fraction f2)
{
        int new_top1 = num * f2.denom;
        int new_top2 = denom * f2.num;

        if ( new_top1 >= new_top2)
            return true;
        return false;
}

bool Fraction::operator <= ( const Fraction f2 )
{
        int new_top1 = num * f2.denom;
        int new_top2 = denom * f2.num;

        if ( new_top1 <= new_top2)
            return true;
        return false;
}
