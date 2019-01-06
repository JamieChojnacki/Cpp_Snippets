#include "Complex.h"

Complex::Complex(float RealPart, float ImaginaryPart) {
    this->RealPart = RealPart;
    this->ImaginaryPart = ImaginaryPart;
}

Complex::Complex(const Complex& c) {
    this->RealPart = c.RealPart;
    this->ImaginaryPart = c.ImaginaryPart;
}

Complex Complex::operator+(const Complex& c) const {
    Complex sum;
    sum.RealPart = this->RealPart + c.RealPart;
    sum.ImaginaryPart = this->RealPart + c.RealPart;
    return sum;
}

Complex Complex::operator-(const Complex& c) const {
    Complex diff;
    diff.RealPart = this->RealPart - c.RealPart;
    diff.ImaginaryPart = this->ImaginaryPart - c.ImaginaryPart;
    return diff;
}

Complex Complex::operator*(const Complex& c) const {
    Complex multi;
    multi.RealPart = this->RealPart * c.RealPart;
    multi.ImaginaryPart = this->ImaginaryPart * c.ImaginaryPart;
    return multi;
}

Complex Complex::operator*(float n) const {
    Complex multi;
    multi.RealPart = this->RealPart * n;
    multi.ImaginaryPart = this->ImaginaryPart * n;
    return multi;
}

Complex Complex::operator~() const {
    Complex conj;
    conj.RealPart = this->RealPart;
    conj.ImaginaryPart = -this->ImaginaryPart;
    return conj;
}

/* friend func */
Complex operator*(double n, const Complex& c){
    return c*n;
}

std::ostream& operator<<(std::ostream& os, const Complex& c){
    os << "(" << c.RealPart << ", " << c.ImaginaryPart << "i)";
    return os;
}

std::istream& operator>>(std::istream& is, Complex& c){
    std::cout << "RealPart: ";
    is >> c.RealPart;
    std::cout << "ImaginaryPart: ";
    is >> c.ImaginaryPart;
    return is;
}

