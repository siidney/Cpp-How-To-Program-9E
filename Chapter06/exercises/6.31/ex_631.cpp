/*
 * =====================================================================================
 *
 *       Filename:  ex_631.cpp
 *
 *    Description:  Exercise 6.31 - Greatest Common Divisor
 *
 *        Version:  1.0
 *        Created:  14/04/16 19:59:39
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int gcd(int, int);

int main(int argc, const char *argv[]) {
    int num1, num2;

    std::cout << "Program to print the gcd of two integers\n" << std::endl;

    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    std::cout << "Greatest Common Divisor: " << gcd(num1, num2) << std::endl;
    return 0;
}
// find and return the greatest common divisor of two integers
int gcd(int x, int y) {
    // smaller number subtracted from larger
    // difference stored in place of larger
    // repeat until 2 numbers equal > gcd

    while (x != y) {
        if (x > y) {
            x -= y;
        } else {
            y -= x;
        }
    }
    // can return either x or y as both will be the same
    return x;
}
