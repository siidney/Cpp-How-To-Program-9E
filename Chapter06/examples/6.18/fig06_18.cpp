/*
 * =====================================================================================
 *
 *       Filename:  fig06_18.cpp
 *
 *    Description:  Fig. 6.18: Using an inline funciton to calculate the volume
 *                  of a cube.
 *
 *        Version:  1.0
 *        Created:  11/04/16 13:43:07
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

inline double cube(const double side) { return side * side * side; }

int main(int argc, const char *argv[]) {
    double sideValue;

    std::cout << "Enter the side length of your cube: ";
    std::cin >> sideValue;

    // calculate cube of sideValue and display result
    std::cout << "Volumen of cube with side " << sideValue << " is "
              << cube(sideValue) << std::endl;
    return 0;
}
