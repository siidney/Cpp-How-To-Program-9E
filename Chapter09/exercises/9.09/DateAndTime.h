/*
 * =====================================================================================
 *
 *       Filename:  DateAndTime.h
 *
 *    Description:  Exercise 9.9 - Combining Class Time and Class Date
 *
 *        Version:  1.0
 *        Created:  09/06/16 16:58:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <iostream>

class DateAndTime{
    public:
        DateAndTime(int = 1, int = 1, int = 2000, int = 0, int = 0, int = 0);

        // SETTERS
        void setTime(int, int, int);
        void setDate(int, int, int);

        void tick(); // increment time by 1 second

        friend std::ostream& operator<<(std::ostream& out, DateAndTime& dt){
            dt.printUniversal();
        }

        void printUniversal();
        void printStandard();

    private:
        const static size_t MONTHS_IN_YEAR = 12;
        const static size_t NO_LEAP = 28;
        const static size_t LEAP = 29;

        int DAYS_IN_MONTH[MONTHS_IN_YEAR + 1] = {
            0, 31, NO_LEAP, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int month;
        int day;
        int year;
        int hour;
        int minute;
        int second;

        bool isLeapYear(int);

        void nextDay(); // increment date by 1
};
