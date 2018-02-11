/*
 * =====================================================================================
 *
 *       Filename:  ex_636.cpp
 *
 *    Description:  Exercise 6.36 - Recursive Exponentiation
 *
 *        Version:  1.0
 *        Created:  15/04/16 15:06:01
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int power(int, int);

int main(int argc, const char *argv[]) {
    int base, exponent;

    std::cout << "A program to recursively calculate exponents" << std::endl;

    std::cout << "\nEnter the base and exponent: ";
    std::cin >> base >> exponent;

    printf("%d to the power of %d: %d\n", base, exponent, power(base, exponent));

    return 0;
}
// recusively calculate exponents
int power(int base, int exponent) {
    if (exponent == 0) { return 1; }

    return base * power(base, exponent - 1);
}
