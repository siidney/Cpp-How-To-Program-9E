/*
 * =============================================================================
 *
 *       Filename:  ex_527.cpp
 *
 *    Description:  Exercise 5.27 - Removing the Continue Statement.
 *
 *        Version:  1.0
 *        Created:  09/02/18 04:25:01
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
    for (int count = 1;  count <= 10; ++count) {
        if (count != 5) {
            std::cout << count << ' ';
        }
    }

    std::cout << "\nSkipped printing 5 without continue" << std::endl;

    return 0;
}  // end method main
