/*
 * =====================================================================================
 *
 *       Filename:  Date.h
 *
 *    Description:  Exercise 9.08 - Enhancing Class Date
 *
 *        Version:  1.1
 *        Created:  09/06/16 13:38:18
 *       Revision:  09/06/16 16:12:15
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <iostream>

class Date{
    public:
        Date(int = 1, int = 1, int = 2000);

        void nextDay(); // increment date by 1

        void print();

        friend std::ostream& operator<<(std::ostream& out, Date& d){
            return d.printSensible(out);
        }

    private:
        const static size_t MONTHS_IN_YEAR = 12;
        const static size_t NO_LEAP = 28;
        const static size_t LEAP = 29;

        int DAYS_IN_MONTH[MONTHS_IN_YEAR + 1] = {
            0, 31, NO_LEAP, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int month;
        int day;
        int year;

        bool isLeapYear(int);

        std::ostream& printSensible(std::ostream&);
};
