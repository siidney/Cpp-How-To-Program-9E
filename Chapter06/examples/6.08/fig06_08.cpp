/*
 * =====================================================================================
 *
 *       Filename:  fig06_08.cpp
 *
 *    Description:  Fig. 6.8: Shifted and scaled random integers
 *
 *        Version:  1.0
 *        Created:  11/04/16 11:21:45
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
    for (int counter = 1; counter <= 20; ++counter) {
        std::cout << std::setw(10) << (1 + rand() % 6);

        // if counter divisible by 5, start a new line of output
        if (counter % 5 == 0) {
            std::cout << std::endl;
        }
    }
    return 0;
}
