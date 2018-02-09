/*
 * =====================================================================================
 *
 *       Filename:  Time.h
 *
 *    Description:  Fig. 9.1: Time class definition
 *
 *        Version:  1.0
 *        Created:  07/06/16 15:03:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

class Time {
 private:
    int hour;    // 0-23 (24-hour format)
    int minute;  // 0-59
    int second;  // 0-59

 public:
    Time();

    void setTime(int, int, int);  // set hour minute second
    void printUniversal();        // print time in universal time format
    void printStandard();         // print time in standard time format
};
