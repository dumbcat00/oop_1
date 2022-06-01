#include <iostream>
#include <string>

using namespace std;

class complex {
    double im;
    double re;
public:
    void setRe(double);
    double getRe();
    void setIm(double);
    double getIm();
    complex sum(complex);
    complex subtract(complex);
    complex mult(complex);
    complex div(complex);

    string get() {
        return to_string(re) + " + " + to_string(im) + "*i";
    }

};

