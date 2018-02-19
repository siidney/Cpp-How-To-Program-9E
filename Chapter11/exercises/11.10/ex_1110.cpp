/*
 * =====================================================================================
 *
 *       Filename:  ex_1110.cpp
 *
 *    Description:  Exercise 11.10: RationalNumber Class
 *
 *        Version:  1.0
 *        Created:  15/07/16 14:13:47
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#include "RationalNumber.hpp"

int main(int argc, const char *argv[]) {
    RationalNumber r1(3, 5);
    RationalNumber r2(9, 4);

    std::cout << "r1: " << r1 << "\nr2: " << r2 << std::endl;

    RationalNumber r3 = r1 + r2;

    std::cout << r1 << " + " << r2 << " = " << r3;
    r3 = r1 - r2;
    std::cout << "\n" << r1 << " - " << r2 << " = " << r3;
    r3 = r1 / r2;
    std::cout << "\n" << r1 << " / " << r2 << " = " << r3;
    r3 = r1 * r2;
    std::cout << "\n" << r1 << " * " << r2 << " = " << r3 << std::endl;

    return 0;
}
