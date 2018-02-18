/*
 * =====================================================================================
 *
 *       Filename:  Rational.hpp
 *
 *    Description:  Exercise 9.06 - Rational Class
 *                  Class representation of reduced form fraction
 *
 *        Version:  1.0
 *        Created:  09/06/16 14:55:09
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

class Rational {
 public:
    explicit Rational(int = 1, int = 2);
    ~Rational();

    Rational operator+(const Rational& r) const {
        return Rational(num + r.num, den + r.den);
    }
    Rational operator-(const Rational& r) const {
        return Rational(num - r.num, den - r.den);
    }
    Rational operator*(const Rational& r) const {
        return Rational(num * r.num, den * r.den);
    }
    Rational operator/(const Rational& r) const {
        return Rational(num / r.num, den / r.den);
    }

    friend std::ostream& operator<<(std::ostream& out, Rational& r) {
        return r.printFloating(out);
    }

    void reduce();
    int gcd(int, int);

    void print();

 private:
    int num;
    int den;

    std::ostream& printFloating(std::ostream&);
};
