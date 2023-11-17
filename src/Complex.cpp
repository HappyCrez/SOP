#include "Complex.h"

Complex::Complex() : Complex (0, 0) { }

Complex::Complex(double real, double imaginary_unit) {
    this->real = real;
    this->imaginary_unit = imaginary_unit;
}

Complex Complex::operator+(Complex num) {
    Complex result;
    result.real = real + num.real;
    result.imaginary_unit = imaginary_unit + num.imaginary_unit;
    return result;
}

Complex Complex::operator-(Complex num) {
    Complex result;
    result.real = real - num.real;
    result.imaginary_unit = imaginary_unit - num.imaginary_unit;
    return result;
}

Complex Complex::operator*(Complex num) {
    Complex result;
    result.real = real*num.real - imaginary_unit*num.imaginary_unit;
    result.imaginary_unit = real*num.imaginary_unit + num.real*imaginary_unit;
    return result;
}

Complex Complex::operator/(Complex num) {
    Complex result;
    double denominator = (num.real*num.real + num.imaginary_unit*num.imaginary_unit);
    result.real =           (real*num.real + imaginary_unit*num.imaginary_unit) / denominator;
    result.imaginary_unit = (imaginary_unit*num.real - real*num.imaginary_unit) / denominator;
    return result;
}

double Complex::getReal() {
    return real;
}

double Complex::getImaginaryUnit() {
    return imaginary_unit;
}

std::ostream& operator<< (std::ostream &os, Complex &complex)   {
    return os << complex.getReal() << " " << complex.getImaginaryUnit() << "i";
}