/*
 * =====================================================================================
 *
 *       Filename:  fig15_14.cpp
 *
 *    Description:  Fig. 15.14: Left and right justification with stream
 *                  manipulators left and right.
 *
 *        Version:  1.0
 *        Created:  21/09/16 14:36:50
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
    int x = 12345;

    // display x right justified (default)
    std::cout << "Default is right justified:" << std::endl
              << std::setw(10) << x;

    // use left manipulator to display x left justified
    std::cout << "\n\nUse std::left to left justify x:\n"
              << std::left << std::setw(10) << x;

    // use right manipulator to display x right justified
    std::cout << "\n\nUse std::right to right justify:\n"
              << std::right << std::setw(10) << x << std::endl;
    return 0;
}
