/*
 * =====================================================================================
 *
 *       Filename:  ex_907.cpp
 *
 *    Description:  Exercise 9.07 - Enhancing Class Time
 *
 *        Version:  1.0
 *        Created:  09/06/16 16:04:57
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#include "Time.hpp"

int main(int argc, const char *argv[]) {
    Time t1(23, 59, 58);

    std::cout << "t1: ";

    t1.printUniversal();

    std::cout << std::endl;

    for (int i = 0; i < 100; ++i) {
        t1.tick();

        if (i % 10 == 0) {
            t1.printUniversal();

            std::cout << " ";

            t1.printStandard();

            std::cout << std::endl;
        }
    }
    return 0;
}
