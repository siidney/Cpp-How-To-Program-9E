/*
 * =====================================================================================
 *
 *       Filename:  fig06_20.cpp
 *
 *    Description:  Fig. 6.20: Initializing and using a reference.
 *
 *        Version:  1.0
 *        Created:  11/04/16 14:10:58
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
    int& y = x;

    std::cout << "x = " << x << std::endl << "y = " << y << std::endl;

    y = 7;  // modifies x

    std::cout << "x = " << x << std::endl << "y = " << y << std::endl;

    return 0;
}
