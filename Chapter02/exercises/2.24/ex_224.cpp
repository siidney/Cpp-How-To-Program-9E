/*
 * =====================================================================================
 *
 *       Filename:  ex_224.cpp
 *
 *    Description:  Exercise 2.24 - Odd or Even
 *
 *        Version:  1.0
 *        Created:  11/03/16 04:03:30
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
    int num1;

    std::cout << "Enter an integer: ";
    std::cin >> num1;

    std::cout << num1 << " is " << ((num1 % 2 == 0) ? "even" : "odd") << std::endl;

    return 0;
}
