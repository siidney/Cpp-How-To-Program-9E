/*
 * =====================================================================================
 *
 *       Filename:  ex_908.cpp
 *
 *    Description:  Exercise 9.08 - Enhancing Class Date
 *
 *        Version:  1.0
 *        Created:  09/06/16 16:10:28
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#include "Date.hpp"

int main(int argc, const char *argv[]) {
    Date d1(11, 30, 2015);

    for (int i = 0; i < 365; ++i) {
        d1.nextDay();

        std::cout << d1 << std::endl;
    }
    return 0;
}
