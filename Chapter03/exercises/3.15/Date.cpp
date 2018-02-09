/*
 * =====================================================================================
 *
 *       Filename:  Date.cpp
 *
 *    Description:  Exercise 3.15 - Date Class
 *
 *        Version:  1.0
 *        Created:  23/03/16 18:04:02
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Date.hpp"

Date::Date(int m, int d, int y) {
    setMonth(m);
    setDay(d);
    setYear(y);
}

// SETTERS
void Date::setMonth(int m) { month = (m > 0 && m <= 12) ? m : 1; }
void Date::setDay(int d) { day = d; }
void Date::setYear(int y) { year = y; }

// GETTERS
int Date::getMonth() const { return month; }
int Date::getDay() const { return day; }
int Date::getYear() const { return year; }

// prints the date mm/dd/yyyy
void Date::displayDate() const {
    std::cout << getMonth() << "/" << getDay() << "/" << getYear() << std::endl;
}
