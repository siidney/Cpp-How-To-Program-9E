/*
 * =====================================================================================
 *
 *       Filename:  Complex.hpp
 *
 *    Description:  Exercise 9.05 - Complex Class
 *                  Complex number class representation
 *
 *        Version:  1.0
 *        Created:  09/06/16 14:20:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <iostream>

class Complex {
 public:
    explicit Complex(double = 1, double = 1);
    ~Complex();

    // overloaded operators
    Complex operator+(Complex c) const {
        return Complex(real + c.real, imaginary + c.imaginary);
    }
    Complex operator-(Complex c) const {
        return Complex(real - c.real, imaginary - c.imaginary);
    }

    friend std::ostream& operator<<(std::ostream& out, Complex& c) {
        return c.printComplex(out);
    }

 private:
    double real;
    double imaginary;

    std::ostream& printComplex(std::ostream&);
};
