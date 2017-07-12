/*
 * =====================================================================================
 *
 *       Filename:  ex_630.cpp
 *
 *    Description:  Exercise 6.30 - Reverse Digits
 *
 *        Version:  1.0
 *        Created:  14/04/16 19:36:13
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int reverseDigits(int);

int main(int argc, const char *argv[]) {
    int n;
    std::cout << "Program to reverse the digits of a given int\n" << std::endl;

    std::cout << "Enter a number to be reversed: ";
    std::cin >> n;

    std::cout << "\n" << reverseDigits(n) << std::endl;
    return 0;
}
// returns a reversed integer
int reverseDigits(int n) {
    int tmp = 0;
    int digits = 1;

    // get number of digits
    for (int d = 1; d <= n; d *= 10) {
        digits *= 10;
    }

    while (n != 0) {
        // reduce digits before using (avoid multiplying final value)
        digits /= 10;
        tmp += n % 10 * digits;

        n /= 10;
    }
    return tmp;
}
