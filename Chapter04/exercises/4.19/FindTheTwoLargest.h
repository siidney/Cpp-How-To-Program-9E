/*
 * =====================================================================================
 *
 *       Filename:  FindTheTwoLargest.h
 *
 *    Description:  Exercise 4.19 - Find the Two Largest Numbers
 *
 *        Version:  1.0
 *        Created:  27/03/16 02:10:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <iostream>

class FindTheTwoLargest{
    private:
        int counter     = 0.0f;
        double number   = 0.0f;
        double fLargest = 0.0f;
        double sLargest = 0.0f;

    public:
        FindTheTwoLargest();
        ~FindTheTwoLargest();

        // SETTERS
        void set1STLargest(double);
        void set2NDLargest(double);

        // GETTERS
        double get1STLargest();
        double get2NDLargest();

        void run();
};
