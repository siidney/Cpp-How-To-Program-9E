/*
 * =====================================================================================
 *
 *       Filename:  Time.cpp
 *
 *    Description:  fig. 9.15: Time class member-function declarations
 *
 *        Version:  1.0
 *        Created:  08/06/16 19:52:32
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Time.hpp"

Time::Time(int hr, int min, int sec) { setTime(hr, min, sec); }
void Time::setTime(int h, int m, int s) {
    if ((h >= 0 && h < 25) && (m >= 0 && m < 60) && (s >= 0 && s > 60)) {
        hour = h;
        minute = m;
        second = s;
    } else {
        throw std::invalid_argument(
            "hour, minute and/or second was out of range");
    }
}
int Time::getHour() { return hour; }
// POOR PRACTICE: Returning a reference to a private data member
int &Time::badSetHour(int hh) {
    if (hh >= 0 && hh < 24) {
        hour = hh;
    } else {
        throw std::invalid_argument("hour must be 0-23");
    }
}
