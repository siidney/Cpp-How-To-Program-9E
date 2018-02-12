/*
 * =====================================================================================
 *
 *       Filename:  ex_713.cpp
 *
 *    Description:  Exercise 7.13 - Single Array Questions
 *
 *        Version:  1.0
 *        Created:  22/04/16 13:09:08
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iomanip>
#include <iostream>

int main(int argc, const char *argv[]) {
    // Initialise the 10 elements of integer array counts to zero
    int counts[10] = {};

    // Add 1 to each of the 15 elements of integer array bonus
    int bonus[15] = {};

    for (int i = 0; i < 15; ++i) {
        ++bonus[i];
    }

    // Read 12 values for double array monthlyTemperatures from the keyboard
    double monthlyTemperature[12] = {};

    for (int i = 0; i < 12; ++i) {
        std::cout << "(" << i + 1 << "/12) Enter temperature: ";
        std::cin >> monthlyTemperature[i];
    }

    // print the 5 values of integer array bestScore in column format
    int bestScore[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; ++i) {
        std::cout << bestScore[i] << std::setw(5);
    }

    std::cout << std::endl;
    return 0;
}
