/*
 * =====================================================================================
 *
 *       Filename:  ex_226.cpp
 *
 *    Description:  Exercise 2.26 - Checkerboard Pattern
 *
 *        Version:  1.0
 *        Created:  11/03/16 04:37:43
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

int main(int argc, const char* argv[]) {
    std::string row = "* * * * * * * *";

    std::cout << "Eight Output Statements:\n" << std::endl;

    std::cout << row << std::endl;
    std::cout << ' ' << row << std::endl;
    std::cout << row << std::endl;
    std::cout << ' ' << row << std::endl;
    std::cout << row << std::endl;
    std::cout << ' ' << row << std::endl;
    std::cout << row << std::endl;
    std::cout << ' ' << row << std::endl;

    std::cout << "\nFor Loop:\n" << std::endl;
    for (int i = 0; i < 8; ++i) {
        if (i % 2 != 0) {
            std::cout << ' ';
        }

        std::cout << row << std::endl;
    }

    return 0;
}
