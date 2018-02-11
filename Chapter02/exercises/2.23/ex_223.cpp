/*
 * =====================================================================================
 *
 *       Filename:  ex_223.cpp
 *
 *    Description:  Exercise 2.23 - Largest and Smallest Integers
 *
 *        Version:  1.0
 *        Created:  11/03/16 03:59:38
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

inline int MAX(int a, int b) {return (a > b ? a : b); }
inline int MIN(int a, int b) {return (a < b ? a : b); }


int main(int argc, const char *argv[]) {
    int num1, num2, num3, num4, num5;

    std::cout << "Enter five integers: ";
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

    std::cout << "Max: " << MAX(num1, MAX(num2, MAX(num3, MAX(num4, num5))))
              << std::endl;
    std::cout << "Min: " << MIN(num1, MIN(num2, MIN(num3, MIN(num4, num5))))
              << std::endl;

    return 0;
}
