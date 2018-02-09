/*
 * =====================================================================================
 *
 *       Filename:  ex_909.cpp
 *
 *    Description:  Exercise 9.9 - Combining Class Time and Class Date
 *
 *        Version:  1.0
 *        Created:  09/06/16 16:56:49
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "DateAndTime.hpp"

#include <iostream>

int main(int argc, const char *argv[]) {
    DateAndTime dt(1, 1, 2000, 23, 59, 59);

    std::cout << dt << std::endl;

    for (int i = 0; i < 10000; ++i) {
        dt.tick();

        std::cout << dt << std::endl;
    }
    return 0;
}
