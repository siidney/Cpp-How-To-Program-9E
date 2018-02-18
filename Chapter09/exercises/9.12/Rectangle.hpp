/*
 * =====================================================================================
 *
 *       Filename:  Rectangle.hpp
 *
 *    Description:  Exercise 9.12 - Enhancing Class Rectangle
 *
 *        Version:  1.0
 *        Created:  09/06/16 18:20:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include "Coord2D.hpp"

class Rectangle {
 public:
    Rectangle(Coord2D, Coord2D, Coord2D, Coord2D);

    // SETTERS
    void setRectangle(Coord2D, Coord2D, Coord2D, Coord2D);

    // GETTERS
    double getWidth();
    double getLength();
    double getPerimeter();
    double getArea();

    bool isRectangle();

 private:
    Coord2D topLeft;
    Coord2D topRight;
    Coord2D bottomLeft;
    Coord2D bottomRight;
};
