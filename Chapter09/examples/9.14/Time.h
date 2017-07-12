/*
 * =====================================================================================
 *
 *       Filename:  Time.h
 *
 *    Description:  Fig. 9.14: Time class declaration
 *
 *        Version:  1.0
 *        Created:  08/06/16 19:50:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <stdexcept>

class Time {
 private:
    int hour;
    int minute;
    int second;

 public:
    Time(int = 0, int = 0, int = 0);
    ;

    void setTime(int, int, int);
    int &badSetHour(int);  // dangerous reference return

    int getHour();
};
