/*
 * =====================================================================================
 *
 *       Filename:  ex_1509.cpp
 *
 *    Description:  Exercise 15.09 - Printing With Field Widths
 *
 *        Version:  1.0
 *        Created:  13/10/16 14:04:36
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
    int i = 12345;
    float f = 1.2345;

    for (int j = 10; j > 1; --j) {
        std::cout << "-----\nWidth: " << j << "\n-----\n"
                  << std::setw(j) << i << "\n"
                  << std::setw(j) << f << std::endl;
    }

    return 0;
}
