/*
 * =====================================================================================
 *
 *       Filename:  fig10_17.cpp
 *
 *    Description:  Fig. 10.17: Cascading member.function calls with the this
 *                  pointer
 *
 *        Version:  1.0
 *        Created:  22/06/16 15:20:17
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Time.hpp"

#include <iostream>

int main(int argc, const char *argv[]) {
    Time t;

    // cascaded function calls
    t.setHour(18).setMinute(30).setSecond(22);

    // output time in universal and standard formats
    std::cout << "Universal time: ";
    t.printUniversal();

    std::cout << "\nStandard time: ";
    t.printStandard();

    std::cout << "\n\nNew standard time: ";

    // cascaded function calls
    t.setTime(20, 20, 20).printStandard();

    std::cout << std::endl;

    return 0;
}
