/*
 * =====================================================================================
 *
 *       Filename:  Time.h
 *
 *    Description:  Fig. 10.15: Cascading member function calls
 *
 *        Version:  1.0
 *        Created:  22/06/16 15:08:29
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

    // SETTERS
    Time& setTime(int, int, int);
    Time& setHour(int);
    Time& setMinute(int);
    Time& setSecond(int);

    // GETTERS
    int getHour() const;
    int getMinute() const;
    int getSecond() const;

    // IO OPERATIONS
    void printUniversal() const;
    void printStandard() const;

 private:
    int hour;
    int minute;
    int second;
};
