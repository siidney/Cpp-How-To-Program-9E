/*
 * =====================================================================================
 *
 *       Filename:  Increment.cpp
 *
 *    Description:  Fig. 10.5: Member function definitions for class Increment
 *                  demonstrate using a member initialiser to initialise a
 *                  constant of a built in data type.
 *
 *        Version:  1.0
 *        Created:  17/06/16 22:49:57
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Increment.hpp"

#include <iostream>

Increment::Increment(int c, int i) : count(c), increment(i) {}
// print count and increment values
void Increment::print() const {
    std::cout << "count = " << count << ", increment = " << increment
              << std::endl;
}
