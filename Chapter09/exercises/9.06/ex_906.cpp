/*
 * =====================================================================================
 *
 *       Filename:  ex_906.cpp
 *
 *    Description:  Exercise 9.06 - Rational Class
 *
 *        Version:  1.0
 *        Created:  09/06/16 14:53:11
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Rational.hpp"

int main(int argc, const char *argv[]) {
    Rational r1;
    Rational r2(25, 50);

    std::cout << "r1: " << r1 << "\nr2: " << r2 << std::endl;

    Rational r3 = (r1 + r2);

    return 0;
}
