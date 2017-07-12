/*
 * =====================================================================================
 *
 *       Filename:  fig07_10.cpp
 *
 *    Description:  Fig. 7.1: Roll a six-sided die 6,000,000 times.
 *
 *        Version:  1.0
 *        Created:  19/04/16 11:37:39
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

int main(int argc, const char *argv[]) {
    const int arraySize = 7;

    int frequency[arraySize] = {};

    srand(time(0));

    for (int roll = 1; roll <= 6000000; ++roll) {
        ++frequency[1 + rand() % 6];
    }

    std::cout << "Face" << std::setw(13) << "Frequency" << std::endl;

    for (int face = 1; face < arraySize; ++face) {
        std::cout << std::setw(4) << face << std::setw(13) << frequency[face]
                  << std::endl;
    }
    return 0;
}
