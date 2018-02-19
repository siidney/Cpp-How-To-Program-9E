/*
 * =====================================================================================
 *
 *       Filename:  Time.hpp
 *
 *    Description:  Exercise 10.9: Time Class Modification
 *
 *        Version:  1.1
 *        Created:  22/06/16 15:08:29
 *       Revision:  04/07/16 14:01:48
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
    const int SECONDS_HOUR = 3600;
    const int SECONDS_MINUTE = 60;

    int secondsSinceMidnight;
};
