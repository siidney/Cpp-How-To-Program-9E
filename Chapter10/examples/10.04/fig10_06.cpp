/*
 * =====================================================================================
 *
 *       Filename:  fig10_06.cpp
 *
 *    Description:  Fig. 10.6: Program to test class Increment
 *
 *        Version:  1.0
 *        Created:  17/06/16 22:51:56
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Increment.hpp"

#include <iostream>

int main(int argc, const char *argv[]) {
    Increment value(10, 5);

    std::cout << "Before incrementing: ";
    value.print();

    for (int j = 1; j <= 3; ++j) {
        value.addIncrement();

        std::cout << "After increment " << j << ": ";
        value.print();
    }
    return 0;
}
