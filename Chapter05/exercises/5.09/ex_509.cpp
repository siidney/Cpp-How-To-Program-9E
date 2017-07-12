/*
 * =====================================================================================
 *
 *       Filename:  ex_509.cpp
 *
 *    Description:  Exercise 5.09 - Product of Odd Integers
 *
 *        Version:  1.0
 *        Created:  04/04/16 18:05:51
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
    int product = 1;

    std::cout << "Product of odd integers 1 to 15: ";

    for (int i = 1; i <= 15; i += 2) {
        product *= i;
    }

    std::cout << product << std::endl;

    return 0;
}
