/*
 * =====================================================================================
 *
 *       Filename:  fig07_05.cpp
 *
 *    Description:  Fig. 7.5: Set array s to the even integers from 2 to 20.
 *
 *        Version:  1.0
 *        Created:  18/04/16 19:31:40
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
    const int arraySize = 10;

    int s[arraySize];

    for (int i = 0; i < arraySize; ++i) {
        s[i] = 2 + 2 * i;
    }

    std::cout << "Element" << std::setw(13) << "Value" << std::endl;

    for (int i = 0; i < arraySize; ++i) {
        std::cout << std::setw(7) << i << std::setw(13) << s[i] << std::endl;
    }
    return 0;
}
