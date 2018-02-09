/*
 * =====================================================================================
 *
 *       Filename:  ex_508.cpp
 *
 *    Description:  Exercise 5.08 - Find the Smallest Integer
 *
 *        Version:  1.0
 *        Created:  04/04/16 17:47:02
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int main(int argc, const char *argv[]) {
    int counter = 0;
    int smallest = 0;
    int current = 0;

    std::cout
        << "Enter a list of space separated integers to determine the smallest"
        << "first entry is number of separate entries\n> ";
    std::cin >> counter;

    // set current smallest
    smallest = 0;

    for (int i = 0; i < counter; i++) {
        std::cin >> current;

        if ((current < smallest) || (i == 0)) {
            smallest = current;
        }
    }

    std::cout << "Smallest: " << smallest << std::endl;
    return 0;
}
