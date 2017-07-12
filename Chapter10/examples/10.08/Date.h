/*
 * =====================================================================================
 *
 *       Filename:  Date.h
 *
 *    Description:  Fig. 10.8: Date class definition
 *
 *        Version:  1.0
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

class Date {
 public:
    static const int monthsPerYear = 12;

    Date(int = 1, int = 1, int = 1900);
    ~Date();

    void print() const;

 private:
    int month;
    int day;
    int year;

    // utility functions
    int checkDay(int) const;
};
