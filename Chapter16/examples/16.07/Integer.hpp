/*
 * =====================================================================================
 *
 *       Filename:  Integer.h
 *
 *    Description:  Fig. 16.7: Integer class definition
 *
 *        Version:  1.0
 *        Created:  25/10/16 22:03:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

class Integer {
 public:
    Integer(int i = 0);
    ~Integer();

    void setInteger(int i);
    int getInteger() const;

 private:
    int value;
};
