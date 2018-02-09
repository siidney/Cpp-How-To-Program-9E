/*
 * =====================================================================================
 *
 *       Filename:  Time.h
 *
 *    Description:  Fig. 10.1: Time class definition with const member
 *                  functions.
 *
 *        Version:  1.0
 *        Created:  17/06/16 19:28:39
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
 public:
    Time(int = 0, int = 0, int = 0);
    ~Time();

    // SETTERS
    void setTime(int, int, int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);

    // GETTERS
    int getHour() const;
    int getMinute() const;
    int getSecond() const;

    // print functions
    void printUniversal() const;
    void printStandard() const;

 private:
    int hour;
    int minute;
    int second;
};
