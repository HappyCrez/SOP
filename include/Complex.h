#pragma once
#include "dependencies.h"

class Complex {
private:
    friend std::ostream& operator<< (std::ostream &os, Complex &complex);
    double real, imaginary_unit;

public:
    Complex();
    Complex(double real, double imaginary_unit);

    Complex operator+(Complex num);
    Complex operator-(Complex num);

    Complex operator*(Complex num);
    Complex operator/(Complex num);

    double getReal();
    double getImaginaryUnit();

};