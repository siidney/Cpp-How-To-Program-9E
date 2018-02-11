/*
 * =====================================================================================
 *
 *       Filename:  fig06_10.cpp
 *
 *    Description:  Fig. 6.10: Randomizing the die-rolling program
 *
 *        Version:  1.0
 *        Created:  11/04/16 11:34:18
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <cstdlib>
#include <iomanip>
#include <iostream>

int main(int argc, const char *argv[]) {
    unsigned seed;

    std::cout << "Enter seed: ";
    std::cin >> seed;

    srand(seed);

    for (int counter = 0; counter <= 10; ++counter) {
        std::cout << std::setw(10) << (1 + rand() % 6);

        if (counter % 5 == 0) {
            std::cout << std::endl;
        }
    }
    return 0;
}
