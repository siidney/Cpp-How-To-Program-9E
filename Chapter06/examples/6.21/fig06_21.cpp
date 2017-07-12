/*
 * =====================================================================================
 *
 *       Filename:  fig06_21.cpp
 *
 *    Description:  Fig. 6.21: References must be initialised
 *
 *        Version:  1.0
 *        Created:  11/04/16 14:12:38
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int main(int argc, const char* argv[]) {
    int x = 3;
    int& y;  // Error y must be initialised

    std::cout << "x = " << x << std::endl << "y = " << y << std::endl;
    y = 7;
    std::cout << "x = " << x << std::endl << "y = " << y << std::endl;
    return 0;
}
