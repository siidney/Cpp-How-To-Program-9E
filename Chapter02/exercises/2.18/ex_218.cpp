/*
 * =====================================================================================
 *
 *       Filename:  ex_218.cpp
 *
 *    Description:  Exercise 2.18 - Comparing integers
 *
 *        Version:  1.0
 *        Created:  11/03/16 04:28:06
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

inline int MAX(int a, int b) { return (a > b) ? a : b; }

int main(int argc, const char *argv[]) {
    int num1, num2;

    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    if (num1 == num2) {
        std::cout << "These numbers are equal" << std::endl;
    } else {
        std::cout << MAX(num1, num2) << " is Larger." << std::endl;
    }
    return 0;
}
