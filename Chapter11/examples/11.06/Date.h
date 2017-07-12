/*
 * =====================================================================================
 *
 *       Filename:  Date.h
 *
 *    Description:  Fig. 11.6: Date class definition with overloaded increment
 *                  operators.
 *
 *        Version:  1.0
 *        Created:  11/07/16 13:43:25
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <iostream>

class Date {
 public:
    Date(int m = 1, int d = 1, int y = 1900);

    friend std::ostream& operator<<(std::ostream&, const Date&);

    void setDate(int, int, int);

    Date& operator++();           // prefix
    Date operator++(int);         // postfix
    const Date& operator+=(int);  // add days, modify object

    static bool leapYear(int);
    bool endOfMonth(int) const;

 private:
    int month;
    int day;
    int year;

    static const int days[];  // days per months
    void helpIncrement();     // utility function to increment date
};
