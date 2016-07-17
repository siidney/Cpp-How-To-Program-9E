/*
 * =====================================================================================
 *
 *       Filename:  ex_650.cpp
 *
 *    Description:  Exercise 6.50 - Circle Area
 *
 *        Version:  1.0
 *        Created:  16/04/16 14:43:16
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <iomanip>

double circleArea(double);

const double PI = 3.14159;

int main(int argc, const char *argv[]){
    double radius;

    std::cout << "A program to print the area of a circle from the radius" << std::endl;

    std::cout << "Enter circle radius: ";
    std::cin >> radius;

    std::cout << std::fixed << std::setprecision(2) << "Area: " << circleArea(radius) << std::endl;
    return 0;
}
// returns the area of a circle from the given radius
double circleArea(double r){
    return PI * (r * r);
}
