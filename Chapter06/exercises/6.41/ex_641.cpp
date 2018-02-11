/*
 * =====================================================================================
 *
 *       Filename:  ex_641.cpp
 *
 *    Description:  Exercise 6.41 - Recursive Greatest Common Divisor
 *
 *        Version:  1.0
 *        Created:  15/04/16 17:04:26
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
    int x, y;

    std::cout << "Program to recursively find the gcd of two numbers"
              << std::endl;

    std::cout << "Enter x and y: ";
    std::cin >> x >> y;

    // tmp must be larger for recursive approach
    if (x < y) {
        int tmp = x;
        x = y;
        y = tmp;
    }

    printf("GCD of %d and %d is %d\n", x, y, gcd(x, y));
    return 0;
}
// recursive greatest common divisor
int gcd(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return gcd(y, x % y);
    }
}
