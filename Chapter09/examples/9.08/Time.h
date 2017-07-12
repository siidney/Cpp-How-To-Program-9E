/*
 * =====================================================================================
 *
 *       Filename:  Time.h
 *
 *    Description:  Fig. 9.8: Time class containing a constructor with default
 *                  arguments.
 *
 *        Version:  1.0
 *        Created:  07/06/16 16:48:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

class Time {
 private:
    int hour;
    int minute;
    int second;

 public:
    Time(int = 0, int = 0, int = 0);

    // SETTERS
    void setTime(int, int, int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);

    // GETTERS
    int getHour();
    int getMinute();
    int getSecond();

    void printUniversal();
    void printStandard();
};
