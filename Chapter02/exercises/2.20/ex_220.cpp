/*
 * =====================================================================================
 *
 *       Filename:  ex_220.cpp
 *
 *    Description:  Exercise 2.20 - Diameter, Circumference and Area of a circle
 *                  Write a program that reads in the radius of a circle as an
 *                  integer and prints the circle's diameter, circumference and
 *                  area.
 *                  Use the constant value 3.14159 for pi.
 *                  Do all calculations in output statements.
 *
 *        Version:  1.0
 *        Created:  11/03/16 03:39:27
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

const double PI = 3.14159;

int main(int argc, const char *argv[]){

    int radius;

    std::cout << "Enter an integer value circle radius: ";
    std::cin >> radius;

    std::cout << "Diameter: " << 2 * radius << std::endl;
    std::cout << "Circumference: " << PI * (2 * radius) << std::endl;
    std::cout << "Area: " << PI * (radius * radius) << std::endl;

    return 0;
}
