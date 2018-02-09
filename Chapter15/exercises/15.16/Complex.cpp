/*
 * =====================================================================================
 *
 *       Filename:  Complex.cpp
 *
 *    Description:  Exercise 15.16 - Complex Class
 *
 *        Version:  1.0
 *        Created:  24/10/16 20:22:05
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Complex.hpp"

std::ostream& operator<<(std::ostream& out, const Complex& complex) {
    return out;
}

std::istream& operator>>(std::istream& in, Complex& complex) { return in; }
