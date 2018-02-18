/*
 * =====================================================================================
 *
 *       Filename:  Rectangle.hpp
 *
 *    Description:  Exercise 9.11 - Rectangle Class
 *
 *        Version:  1.0
 *        Created:  09/06/16 17:27:54
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

class Rectangle {
 public:
    explicit Rectangle(double = 1.0f, double = 1.0f);

    // SETTERS
    void setLength(double);
    void setWidth(double);

    // GETTERS
    double getLength() { return length; }
    double getWidth() { return width; }
    double getPerimeter();
    double getArea();

 private:
    double length;
    double width;
};
