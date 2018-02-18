/*
 * =====================================================================================
 *
 *       Filename:  ex_904.cpp
 *
 *    Description:  Exercise 9.04 - Enhancing Time Class
 *
 *        Version:  1.0
 *        Created:  09/06/16 13:52:06
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#include "Time.hpp"

int main(int argc, const char *argv[]) {
    Time time1;
    Time time2(12, 12, 12);

    std::cout << "time1: ";
    time1.printUniversal();
    std::cout << std::endl;
    time1.printStandard();

    std::cout << "\n\ntime2: ";
    time2.printUniversal();
    std::cout << std::endl;
    time2.printStandard();
    std::cout << std::endl;

    return 0;
}
