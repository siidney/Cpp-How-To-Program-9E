/*
 * =====================================================================================
 *
 *       Filename:  ex_613.cpp
 *
 *    Description:  Exercise 6.13 - Rounding Numbers
 *
 *        Version:  1.0
 *        Created:  11/04/16 23:13:11
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <math.h>
#include <iostream>

int main(int argc, const char *argv[]) {
    double num = 0.0f;

    std::cout << "Program to round number to the nearest integer" << std::endl;

    while (num != -1) {
        std::cout << "Enter a number to round (-1 to exit): ";
        std::cin >> num;

        if (num == -1) {
            break;
        }

        std::cout << "num: " << num << "\nrounded: " << floor(num + .5)
                  << std::endl;
    }

    return 0;
}
