/*
 * =====================================================================================
 *
 *       Filename:  fig15_15.cpp
 *
 *    Description:  Fig. 15.15: Printing an integer with internal spacing and
 *                  plus sign.
 *
 *        Version:  1.0
 *        Created:  21/09/16 14:40:37
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
    // display value with internal spacing and plus sign
    std::cout << std::internal << std::showpos << std::setw(10) << 123
              << std::endl;
    return 0;
}
