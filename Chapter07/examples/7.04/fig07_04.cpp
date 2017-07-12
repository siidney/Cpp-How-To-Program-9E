/*
 * =====================================================================================
 *
 *       Filename:  fig07_04.cpp
 *
 *    Description:  Fig. 7.4: Initializing an array in a declaration.
 *
 *        Version:  1.0
 *        Created:  18/04/16 19:29:12
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
    int n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};

    std::cout << "Element" << std::setw(13) << "Value" << std::endl;

    for (int i = 0; i < 10; ++i) {
        std::cout << std::setw(7) << i << std::setw(13) << n[i] << std::endl;
    }
    return 0;
}
