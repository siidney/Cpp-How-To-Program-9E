/*
 * =====================================================================================
 *
 *       Filename:  fig15_18.cpp
 *
 *    Description:  Fig. 15.18: Displaying floating-point values in system
 *                  default.
 *
 *        Version:  1.0
 *        Created:  03/10/16 16:56:16
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
    double x = 0.001234567;
    double y = 1.946e9;

    // display x and y in default format
    std::cout << "Displayed in default format:" << std::endl
              << x << '\t' << y << std::endl;

    // display x and y in scientific format
    std::cout << "\nDisplayed in scientific format:" << std::endl
              << std::scientific << x << '\t' << y << std::endl;

    // display x and y in fixed format
    std::cout << "\nDisplayed in fixed format:" << std::endl
              << std::fixed << x << '\t' << y << std::endl;

    return 0;
}
