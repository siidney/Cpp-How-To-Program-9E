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
#include "Date.h"

Date::Date(int m, int d, int y){
    setMonth(m);
    setDay(d);
    setYear(y);
}
// SETTERS
void Date::setMonth(int m){
    month = (m > 0 && m <= 12) ? m : 1;
}
void Date::setDay(int d){
    day = d;
}
void Date::setYear(int y){
    year = y;
}
// GETTERS
int Date::getMonth(){
    return month;
}
int Date::getDay(){
    return day;
}
int Date::getYear(){
    return year;
}
// prints the date mm/dd/yyyy
void Date::displayDate(){
    std::cout << getMonth() << "/" << getDay() << "/" << getYear() << std::endl;
}
