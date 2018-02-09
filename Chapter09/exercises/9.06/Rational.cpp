/*
 * =====================================================================================
 *
 *       Filename:  Rational.cpp
 *
 *    Description:  Exercise 9.06 - Rational Class
 *                  Class representation of reduced form fraction
 *
 *        Version:  1.0
 *        Created:  09/06/16 15:03:03
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Rational.hpp"

Rational::Rational(int n, int d) : num(n), den(d) { reduce(); }
Rational::~Rational() {}
// reduce fractions
void Rational::reduce() {
    int GCD = gcd(num, den);

    num /= GCD;
    den /= GCD;
}
int Rational::gcd(int a, int b) {
    if (b == 0) {
        return a;
    }

    return gcd(b, a % b);
}
// print rational number
std::ostream& Rational::printFloating(std::ostream& out) {
    return out << num << "." << den;
}
void Rational::print() { std::cout << num << "/" << den; }
