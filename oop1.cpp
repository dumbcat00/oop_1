#include "complex.h"

int main()
{
    complex x;
    double r1, i1;
    cout << "enter x real and imag:  ";
    cin >> r1 >> i1;
    x.setRe(r1);
    x.setIm(i1);

    complex y;
    double r2, i2;
    cout << "enter y real and imag:  ";
    cin >> r2 >> i2;
    y.setRe(r2);
    y.setIm(i2);
    cout << endl;

    cout << "x+y = " << y.sum(x).get() << endl;
    cout << "x-y = " << y.subtract(x).get() << endl;
    cout << "x*y = " << y.mult(x).get() << endl;
    cout << "x/y = " << y.div(x).get() << endl;
}