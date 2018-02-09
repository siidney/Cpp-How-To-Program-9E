/*
 * =====================================================================================
 *
 *       Filename:  Date.hpp
 *
 *    Description:  Exercise 3.15 - Date Class
 *
 *        Version:  1.0
 *        Created:  23/03/16 18:00:34
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
 private:
    int month = 1;
    int day = 1;
    int year = 1900;

 public:
    Date(int, int, int);

    // SETTERS
    void setMonth(int);
    void setDay(int);
    void setYear(int);

    // GETTERS
    int getMonth() const;
    int getDay() const;
    int getYear() const;

    void displayDate() const;
};
