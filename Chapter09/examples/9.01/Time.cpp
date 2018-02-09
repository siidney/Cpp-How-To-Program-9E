/*
 * =====================================================================================
 *
 *       Filename:  Time.cpp
 *
 *    Description:  fig. 9.2: Member-function definitions for class Time.
 *
 *        Version:  1.0
 *        Created:  07/06/16 15:52:38
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Time.hpp"

#include <iomanip>
#include <iostream>
#include <stdexcept>  // for invalid_argument exception class

// initialise each data member to zero
Time::Time() { hour = minute = second = 0; }
// set new Time value using univeral time
void Time::setTime(int h, int m, int s) {
    // validate
    if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)) {
        hour = h;
        minute = m;
        second = s;
    } else {
        throw std::invalid_argument(
            "hour, minute and/or seconds was out of range");
    }
}
// print Time in universal time format
void Time::printUniversal() {
    std::cout << std::setfill('0') << std::setw(2) << hour << ":"
              << std::setw(2) << minute << ":" << std::setw(2) << second;
}
// print Time in standard-time format
void Time::printStandard() {
    std::cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
              << std::setfill('0') << std::setw(2) << minute << ":"
              << std::setw(2) << second << (hour < 12 ? " AM" : " PM");
}
