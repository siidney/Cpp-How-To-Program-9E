/*
 * =====================================================================================
 *
 *       Filename:  FindTheLargest.h
 *
 *    Description:  Exercise 4.17 - Find the Largest
 *
 *        Version:  1.0
 *        Created:  27/03/16 01:51:42
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

class FindTheLargest {
 private:
    int counter = 0;
    double number = 0;
    double largest = 0;

 public:
    FindTheLargest();
    ~FindTheLargest();

    // SETTERS
    void setLargest(double);

    // GETTERS
    double getLargest();

    void run();
};
