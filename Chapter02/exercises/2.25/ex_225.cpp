/*
 * =====================================================================================
 *
 *       Filename:  ex_225.cpp
 *
 *    Description:  Exercise 2.25 - Multiples
 *
 *        Version:  1.0
 *        Created:  11/03/16 04:06:37
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int main(int argc, const char *argv[]) {
    int num1, num2;

    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    std::cout << num1 << ((num1 % num2 == 0) ? " is " : " is not ")
              << "a multiple of " << num2 << std::endl;
    return 0;
}
