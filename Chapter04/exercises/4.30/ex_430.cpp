/*
 * =====================================================================================
 *
 *       Filename:  ex_430.cpp
 *
 *    Description:  Exercise 4.30 - Calculating a Circle's Diameter,
 *                  Circumference and Area.
 *
 *        Version:  1.0
 *        Created:  27/03/16 18:13:31
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <math.h>
#include <iostream>

void printCircle(double);
double getDiameter(double);
double getArea(double);
double getCircumference(double);

const double PI = 3.14159;

int main(int argc, const char *argv[]) {
    double radius;

    std::cout << "Program to print a circle's diameter, circumference and area"
              << std::endl;

    std::cout << "Enter a circles radius: ";
    std::cin >> radius;

    printCircle(radius);

    return 0;
}
void printCircle(double r) {
    std::cout << "Radius: " << r << std::endl;
    std::cout << "Diameter: " << getDiameter(r) << std::endl;
    std::cout << "Area: " << getArea(r) << std::endl;
    std::cout << "Circumference: " << getCircumference(r) << std::endl;
}
double getDiameter(double r) { return r * 2; }
double getArea(double r) { return PI * pow(r, 2); }
double getCircumference(double r) { return 2 * (PI * r); }
