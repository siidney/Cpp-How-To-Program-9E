/*
 * =====================================================================================
 *
 *       Filename:  Integer.cpp
 *
 *    Description:  Fig. 16.8: Integer member function definitions.
 *
 *        Version:  1.0
 *        Created:  25/10/16 22:04:22
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Integer.hpp"

#include <iostream>

Integer::Integer(int i) : value(i) {
    std::cout << "Constructor for Integer " << value << std::endl;
}
Integer::~Integer() {
    std::cout << "Destructor for Integer " << value << std::endl;
}
// set Integer value
void Integer::setInteger(int i) { value = i; }
// get Integer value
int Integer::getInteger() const { return value; }
