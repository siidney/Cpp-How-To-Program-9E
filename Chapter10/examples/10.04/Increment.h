/*
 * =====================================================================================
 *
 *       Filename:  Increment.h
 *
 *    Description:  Fig. 10.4: Definition of class increment
 *
 *        Version:  1.0
 *        Created:  17/06/16 22:47:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

class Increment {
 public:
    Increment(int c = 0, int i = 1);

    // function addIncrement definition
    void addIncrement() { count += increment; }
    void print() const;

 private:
    int count;

    const int increment;
};
