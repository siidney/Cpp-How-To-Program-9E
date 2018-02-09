/*
 * =====================================================================================
 *
 *       Filename:  ex_209.cpp
 *
 *    Description:  Exercise 2.9 - Print Single C++ Statements.
 *
 *        Version:  1.0
 *        Created:  10/03/16 23:52:15
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
    int a, b, c;

    std::cout << "Enter two numbers ";
    std::cin >> b >> c;

    a = b * c;

    std::cout << "This program performs a payroll calculation" << std::endl;
    std::cout << "Enter three integer values ";

    std::cin >> a >> b >> c;

    return 0;
}
