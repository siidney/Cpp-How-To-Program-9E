/*
 * =====================================================================================
 *
 *       Filename:  RationalNumber.hpp
 *
 *    Description:  Exercise 11.10: RationalNumber Class
 *
 *        Version:  1.0
 *        Created:  15/07/16 14:13:26
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

class RationalNumber {
    friend std::ostream& operator<<(std::ostream&, const RationalNumber&);
    friend std::istream& operator>>(std::istream&, RationalNumber&);

 public:
    explicit RationalNumber(int = 1, int = 1);

    RationalNumber operator+(const RationalNumber&) const;
    RationalNumber operator-(const RationalNumber&) const;
    RationalNumber operator/(const RationalNumber&) const;
    RationalNumber operator*(const RationalNumber&)const;

    bool operator==(const RationalNumber&) const;
    bool operator!=(const RationalNumber&) const;

 private:
    int numerator;
    int denominator;

    void reduce(int, int);
    int gcd(int, int) const;
};
