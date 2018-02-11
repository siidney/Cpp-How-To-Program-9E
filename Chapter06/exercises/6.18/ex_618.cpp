/*
 * =====================================================================================
 *
 *       Filename:  ex_618.cpp
 *
 *    Description:  Exercise 6.18 - Exponentation
 *
 *        Version:  1.0
 *        Created:  14/04/16 15:13:17
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int integerPower(int, int);

int main(int argc, const char *argv[]) {
    int base, exponent;

    std::cout << "Enter base and exponent: ";
    std::cin >> base >> exponent;

    std::cout << base << " to the power of " << exponent << ": "
              << integerPower(base, exponent) << std::endl;

    return 0;
}
// returns base to the power of exponent
int integerPower(int base, int exponent) {
    // base case
    if (exponent <= 0) {
        return 1;
    }

    return base * integerPower(base, exponent - 1);
}
