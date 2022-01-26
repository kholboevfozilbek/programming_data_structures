/// ADT interface, definition of my structure and specification of methods

#ifndef FRAC_LIB_H_KNOWN

#define FRAC_LIB_H_KNOWN

struct Fraction
{
private:
    int num;
    int denom;

public:
    ///methods of structure

    Fraction();
    Fraction(int N, int D=1);
    void print();

    int getNum() const;
    int getDenom() const;  /// selector, getter

    void setNum(int N);
    void setDenom(int D);       /// modifier, setter
    int set_OBj(int N, int D);

    /// operator overloading
    ///arithmetic operators
    int GCD(int a, int b);
    int LCM(int f1_denom /*a*/ , int f2_denom /*b*/);

    Fraction operator + (const Fraction f2);
    Fraction operator - (const Fraction f2);
    Fraction operator * (const Fraction f2);
    Fraction operator / ( const Fraction f2);

    /// comparison operator
    bool operator == (const Fraction f2);
    bool operator != (const Fraction f2);
    bool operator > (const Fraction f2);
    bool operator < (const Fraction f2);
    bool operator >= (const Fraction f2);
    bool operator <= ( const Fraction f2 );
};

#endif // FRAC_LIB_H_KNOWN
