
#ifndef LIB_FRAC_H_KNOWN
#define LIB_FRAC_H_KNOWN


struct Fraction {
private:
    int num;
    int denom;
public:
    /// methods
    Fraction();
    Fraction(int N, int D=1);
    void print();

    int getNum();
    int getDenom();
    void setNum(int N);
    void setDenom(int D);
    bool operator==(Fraction x);
    void shorten();

};


#endif // LIB_FRAC_H_KNOWN


