/*
 * =====================================================================================
 *
 *       Filename:  Time.hpp
 *
 *    Description:  Exercise 9.7 - Enhancing Class Time
 *
 *        Version:  1.1
 *        Created:  07/06/16 16:48:11
 *       Revision:  09/06/16 16:00:43
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
    explicit Time(int = 0, int = 0, int = 0);

    // SETTERS
    void setTime(int, int, int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);

    // GETTERS
    int getHour();
    int getMinute();
    int getSecond();

    void tick();  // increment time by 1 second

    void printUniversal();
    void printStandard();

 private:
    int hour;
    int minute;
    int second;
};
