/*
 * =====================================================================================
 *
 *       Filename:  Date.h
 *
 *    Description:  Fig. 9.17: Date class declaration
 *
 *        Version:  1.0
 *        Created:  09/06/16 13:38:18
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
    Date(int = 1, int = 1, int = 2000);

    void print();

 private:
    int month;
    int day;
    int year;
};
