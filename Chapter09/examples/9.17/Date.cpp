/*
 * =====================================================================================
 *
 *       Filename:  Date.cpp
 *
 *    Description:  Fig. 9.18: Date class member-function definitions
 *
 *        Version:  1.0
 *        Created:  09/06/16 13:40:10
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Date.hpp"

#include <iostream>

// date constructor (should do range checking)
Date::Date(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}
// print date in format mm/dd/yyyy
void Date::print() { std::cout << month << "/" << day << "/" << year; }
