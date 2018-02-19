/*
 * =====================================================================================
 *
 *       Filename:  Complex.hpp
 *
 *    Description:  Exercise 11.8: Complex Class
 *
 *        Version:  1.0
 *        Created:  14/07/16 19:51:56
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
    friend std::ostream& operator<<(std::ostream&, const Complex&);
    friend std::istream& operator>>(std::istream&, Complex&);

 public:
    explicit Complex(double = 0.0f, double = 0.0f);

    Complex operator+(const Complex&) const;
    Complex operator-(const Complex&) const;
    Complex operator*(const Complex&)const;

    bool operator==(const Complex&) const;
    bool operator!=(const Complex&) const;

 private:
    double real;
    double imaginary;
};
