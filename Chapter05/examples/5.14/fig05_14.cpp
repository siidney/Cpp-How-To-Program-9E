/*
 * =============================================================================
 *
 *       Filename:  fig05_14.cpp
 *
 *    Description:  Fig. 5.14 - Continue statement terminating an iteration of
 *                  a for statement.
 *
 *        Version:  1.0
 *        Created:  09/02/18 04:27:58
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
        if (count == 5) {
            continue;
        }

        std::cout << count << ' ';
    }

    std::cout << "\nUsed continue to skip printing 5" << std::endl;

    return 0;
}  // end method main
