/*
 * =====================================================================================
 *
 *       Filename:  ex_620.cpp
 *
 *    Description:  Exercise 6.20 - Multiples
 *
 *        Version:  1.0
 *        Created:  14/04/16 16:12:34
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

bool multiple(int, int);

int main(int argc, const char *argv[]) {
    int x;
    int y;
    int choice = 0;

    std::cout
        << "Program to determine if first integer is a multiple of a second\n"
        << std::endl;

    while (choice >= 0) {
        std::cout << "Enter two integers (-1 to quit): ";
        std::cin >> x;

        if (x == -1) {
            break;
        }

        std::cin >> y;

        std::cout << x << " and " << y
                  << (multiple(x, y) ? ": true" : ": false") << std::endl;
    }

    return 0;
}
// determines if y is a multiple of x
bool multiple(int x, int y) { return (y % x == 0); }
