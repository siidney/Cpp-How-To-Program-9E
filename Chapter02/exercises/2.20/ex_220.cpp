/*
 * =====================================================================================
 *
 *       Filename:  ex_220.cpp
 *
 *    Description:  Exercise 2.20 - Diameter, Circumference and Area of a circle
 *
 *        Version:  1.0
 *        Created:  11/03/16 03:39:27
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

const double PI = 3.14159;

int main(int argc, const char *argv[]) {
    int radius;

    std::cout << "Enter an integer value circle radius: ";
    std::cin >> radius;

    std::cout << "Diameter: " << 2 * radius << std::endl;
    std::cout << "Circumference: " << PI * (2 * radius) << std::endl;
    std::cout << "Area: " << PI * (radius * radius) << std::endl;

    return 0;
}
