/*
 * =====================================================================================
 *
 *       Filename:  Interface.h
 *
 *    Description:  Fig. 10.22: Proxy class interfact definition.
 *                  Client sees this source colde, but the source code does not
 *                  reveal the data layout of the class Implementation.
 *
 *        Version:  1.0
 *        Created:  22/06/16 17:39:59
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

class Implementation;  // forward class declaration require by private
                       // declaration

class Interface {
 public:
    Interface(int);
    ~Interface();

    void setValue(int);
    int getValue() const;

 private:
    // requires forward declaration
    Implementation *ptr;
};
