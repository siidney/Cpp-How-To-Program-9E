/*
 * =====================================================================================
 *
 *       Filename:  fig07_03.cpp
 *
 *    Description:  Fig. 7.3: Initializing an array's elements to zeros and
 *                  printing the array.
 *
 *        Version:  1.0
 *        Created:  18/04/16 19:26:09
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
    int n[10];

    for (int i = 0; i < 10; ++i) {
        n[i] = 0;
    }

    std::cout << "Element" << std::setw(13) << "Value" << std::endl;

    for (int i = 0; i < 10; ++i) {
        std::cout << std::setw(7) << i << std::setw(13) << n[i] << std::endl;
    }
    return 0;
}
