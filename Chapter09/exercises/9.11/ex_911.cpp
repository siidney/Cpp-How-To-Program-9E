/*
 * =====================================================================================
 *
 *       Filename:  ex_911.cpp
 *
 *    Description:  Exercise 9.11 - Rectangle Class
 *
 *        Version:  1.0
 *        Created:  09/06/16 17:27:09
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
    Rectangle r1(19, 19);

    std::cout << "Area: " << r1.getArea()
              << "\nPerimeter: " << r1.getPerimeter() << std::endl;

    return 0;
}
