/*
 * =====================================================================================
 *
 *       Filename:  Date.hpp
 *
 *    Description:  Exercise 10.06: Date Class Modification
 *
 *        Version:  1.1
 *        Created:  17/06/16 23:46:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <string>

class Date {
 public:
    static const int monthsPerYear = 12;
    static const int daysPerWeek = 7;

    const int daysPerMonth[monthsPerYear + 1] = {0,  31, 28, 31, 30, 31, 30,
                                                 31, 31, 30, 31, 30, 31};

    const std::string monthNames[monthsPerYear + 1] = {
        "",        "January",  "February", "Mar.hpp",  "April",
        "May",     "June",     "July",     "August", "September",
        "October", "November", "December"};

    const std::string dayNames[daysPerWeek] = {
        "Sunday",   "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"};

    Date();
    Date(int, int, int);
    Date(std::string, int, int);

    void printDayYear() const;
    void printShort() const;
    void printLong() const;

    void setMonth(int);
    void setYear(int);
    void setDay(int);

 private:
    int month;
    int day;
    int year;
    std::string weekday;

    // utility functions
    int checkDay(int) const;

    void setWeekDay();
};
