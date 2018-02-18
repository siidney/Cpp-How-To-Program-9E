/*
 * =====================================================================================
 *
 *       Filename:  Complex.cpp
 *
 *    Description:  Exercise 9.05 - Complex Class
 *                  Complex number class representation
 *
 *        Version:  1.0
 *        Created:  09/06/16 14:42:36
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Complex.hpp"

Complex::Complex(double r, double i) {
    real = r;
    imaginary = i;
}
Complex::~Complex() {}
// print complex number
std::ostream& Complex::printComplex(std::ostream& out) {
    out << "(" << real << "," << imaginary << ")";
    return out;
}
