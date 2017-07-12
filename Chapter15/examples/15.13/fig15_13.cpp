/*
 * =====================================================================================
 *
 *       Filename:  fig15_13.cpp
 *
 *    Description:  Fig. 15.13: Controlling the printing of trailing zeros and
 *                  decimal points in floating-point values.
 *
 *        Version:  1.0
 *        Created:  21/09/16 14:27:11
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
    // display double values with default stream format
    std::cout << "Before using showpoint" << std::endl
              << "9.99000 prints as: " << 9.9900 << std::endl
              << "9.90000 prints as: " << 9.9000 << std::endl
              << "9.00000 prints as: " << 9.0000 << std::endl;

    // display double value after showpoint
    std::cout << std::showpoint << "After using showpoint" << std::endl
              << "9.99000 prints as: " << 9.9900 << std::endl
              << "9.90000 prints as: " << 9.9000 << std::endl
              << "9.00000 prints as: " << 9.0000 << std::endl;

    return 0;
}
