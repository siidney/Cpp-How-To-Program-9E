/*
 * =====================================================================================
 *
 *       Filename:  ex_905.cpp
 *
 *    Description:  Exercise 9.5 - Complex Class
 *
 *        Version:  1.0
 *        Created:  09/06/16 14:45:20
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Complex.hpp"

int main(int argc, const char *argv[]) {
    Complex c1;
    Complex c2(123, 456);

    Complex c3 = (c1 + c2);

    std::cout << "c1: " << c1 << "\nc2: " << c2 << "\nc3: " << c3 << std::endl;

    return 0;
}
