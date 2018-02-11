/*
 * =====================================================================================
 *
 *       Filename:  ex_419.cpp
 *
 *    Description:  Exercise 4.19 - Find the Two Largest Numbers
 *
 *        Version:  1.0
 *        Created:  27/03/16 02:18:04
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

inline int MAX(int a, int b) { return (a > b ? a : b); }

int main(int argc, const char *argv[]) {
    int counter = 0;
    int number = 0;
    int fLargest = 0;
    int sLargest = 0;

    std::cout << "Program to find the largest of 10 numbers\n" << std::endl;

    while (counter < 10) {
        std::cout << "Enter number: (" << (10 - counter) << " remaining): ";
        std::cin >> number;

        if (MAX(fLargest, number) == number) {
            sLargest = fLargest;
            fLargest = number;
        }

        ++counter;
    }

    std::cout << "First Largest: " << fLargest
              << "\nSecond Largest: " << sLargest << std::endl;

    return 0;
}
