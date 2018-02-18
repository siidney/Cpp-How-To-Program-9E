/*
 * =====================================================================================
 *
 *       Filename:  Rectangle.cpp
 *
 *    Description:  Exercise 9.11 - Rectangle Class
 *
 *        Version:  1.0
 *        Created:  09/06/16 17:28:06
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Rectangle.hpp"

#include <stdexcept>

Rectangle::Rectangle(double l, double w) {
    setLength(l);
    setWidth(w);
}

// SETTERS
void Rectangle::setLength(double l) {
    if (l > 0.0f && l < 20.0f) {
        length = l;
    } else {
        throw std::invalid_argument("Length must be > 0.0 && < 20.0");
    }
}

void Rectangle::setWidth(double w) {
    if (w > 0.0f && w < 20.0f) {
        width = w;
    } else {
        throw std::invalid_argument("Width must be > 0.0 && < 20.0");
    }
}

// GETTERS
double Rectangle::getPerimeter() { return ((2 * length) + (2 * width)); }
double Rectangle::getArea() { return length * width; }
