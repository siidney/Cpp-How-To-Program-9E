/*
 * =====================================================================================
 *
 *       Filename:  Implementation.h
 *
 *    Description:  Fig. 10.21: Implementation class definition
 *
 *        Version:  1.0
 *        Created:  22/06/16 17:38:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

class Implementation {
 public:
    Implementation(int v) : value(v) {}

    void setValue(int v) { value = v; }

    int getValue() const { return value; }

 private:
    int value;
};
