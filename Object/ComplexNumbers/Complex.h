#ifndef COMPLEXNUMBERS_COMPLEX_H
#define COMPLEXNUMBERS_COMPLEX_H

#include <iostream>

class Complex {
private:
    float RealPart;
    float ImaginaryPart;
public:
    Complex()  // default ctor
    :RealPart(0.0f), ImaginaryPart(0.0f){}
    Complex(float, float);
    Complex(const Complex&);  // copy ctor
    /* overloaded methods */
    Complex operator+(const Complex&) const;
    Complex operator-(const Complex&) const;
    Complex operator*(const Complex&) const;
    Complex operator*(float) const;
    Complex operator~() const;
    /* friend func */
    friend Complex operator*(double, const Complex&);
    friend std::ostream& operator<<(std::ostream&, const Complex&);
    friend std::istream& operator>>(std::istream&, Complex&);

};

#endif //COMPLEXNUMBERS_COMPLEX_H
