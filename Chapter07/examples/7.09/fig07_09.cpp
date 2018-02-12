/*
 * =====================================================================================
 *
 *       Filename:  fig07_09.cpp
 *
 *    Description:  Fig. 7.9: Bar Chart Printing Program
 *
 *        Version:  1.0
 *        Created:  18/04/16 19:44:37
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
    const int arraySize = 11;

    int n[arraySize] = {0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1};

    std::cout << "Grade distribution: " << std::endl;

    for (int i = 0; i < arraySize; ++i) {
        // output bar labels
        if (i == 0) {
            std::cout << "  0-9: ";
        } else if (i == 10) {
            std::cout << "  100: ";
        } else {
            std::cout << i * 10 << "-" << (i * 10) + 9 << ": ";
        }

        // print bar of asterisks
        for (int stars = 0; stars < n[i]; ++stars) {
            std::cout << '*';
        }

        std::cout << std::endl;
    }
    return 0;
}
