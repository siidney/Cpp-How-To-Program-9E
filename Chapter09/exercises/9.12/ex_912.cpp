/*
 * =====================================================================================
 *
 *       Filename:  ex_912.cpp
 *
 *    Description:  Exercise 9.12 - Enhancing Class Rectangle
 *
 *        Version:  1.0
 *        Created:  09/06/16 18:19:16
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#include "Rectangle.hpp"

int main(int argc, const char *argv[]) {
    Coord2D tl(1, 1);
    Coord2D bl(1, 4);
    Coord2D tr(3, 1);
    Coord2D br(3, 4);

    Rectangle r1(tl, bl, tr, br);

    std::cout << "Width: " << r1.getWidth() << "\nLength: " << r1.getLength()
              << "\nArea: " << r1.getArea()
              << "\nPerimeter: " << r1.getPerimeter() << std::endl;
    return 0;
}
