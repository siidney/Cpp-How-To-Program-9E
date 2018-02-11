/*
 * =====================================================================================
 *
 *       Filename:  ex_621.cpp
 *
 *    Description:  Exercise 6.21 - Even Numbers
 *
 *        Version:  1.0
 *        Created:  14/04/16 16:42:29
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

inline bool isEven(int x) { return (x % 2 == 0); }

int main(int argc, const char *argv[]) {
    int input = 0;

    std::cout << "Program to determine whether an integer is even\n"
              << std::endl;

    while (input >= 0) {
        std::cout << "Enter an integer (-1 to quit): ";
        std::cin >> input;

        if (input >= 0) {
            std::cout << input << ":" << (isEven(input) ? "" : " not")
                      << " even" << std::endl;
        }
    }
    return 0;
}
