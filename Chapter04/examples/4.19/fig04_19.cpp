/*
 * =====================================================================================
 *
 *       Filename:  fig04_19.cpp
 *
 *    Description:  Fig. 4.19: Preincrimenting and postincrementing.
 *
 *        Version:  1.0
 *        Created:  24/03/16 19:30:39
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
    int c;

    // postincrement
    c = 5;
    std::cout << c << std::endl;
    std::cout << c++ << std::endl;
    std::cout << c << std::endl;

    std::cout << std::endl;

    // preincrement
    c = 5;
    std::cout << c << std::endl;
    std::cout << ++c << std::endl;
    std::cout << c << std::endl;

    return 0;
}
