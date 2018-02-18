/*
 * =====================================================================================
 *
 *       Filename:  Time.hpp
 *
 *    Description:  Exercise 9.4 - Enhancing Time Class
 *
 *        Version:  1.1
 *        Created:  07/06/16 16:48:11
 *       Revision:  09/06/16 14:09:07
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
    Time();
    Time(int, int, int);

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
