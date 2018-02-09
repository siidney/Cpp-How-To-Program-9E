/*
 * =============================================================================
 *
 *       Filename:  ex_525.cpp
 *
 *    Description:  Exercise 5.25 - Removing Break and Continue.
 *
 *        Version:  1.0
 *        Created:  09/02/18 04:16:22
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    int count = 1;
    bool exit = false;

    while (!exit) {
        std::cout << count++ << " ";

        exit = (count == 5);
    }

    std::cout << "\nBroke out of loop at count = " << count << std::endl;

    return 0;
}  // end method main
