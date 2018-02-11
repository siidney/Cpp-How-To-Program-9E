/*
 * =====================================================================================
 *
 *       Filename:  ex_627.cpp
 *
 *    Description:  Exercise 6.27 - Find the Minimum
 *
 *        Version:  1.1
 *        Created:  14/04/16 18:23:58
 *       Revision:  11/02/18 03:44:59
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <iomanip>

inline double min1(double a, double b) { return (a < b ? a : b); }
double minimum(double, double, double);

int main(int argc, const char *argv[]) {
    double d1, d2, d3;

    std::cout << "Program to find the smallest of 3 doubles\n" << std::endl;

    std::cout << "Enter three double values: ";
    std::cin >> d1 >> d2 >> d3;

    std::cout << std::fixed << std::setprecision(1)
              << "Smallest: " << minimum(d1, d2, d3) << std::endl;
    return 0;
}
// finds and returns the smallest of 3 values
double minimum(double d1, double d2, double d3) {
    double min = (d1 < d2 ? d1 : d2);

    return (d3 < min ? d3 : min);
}
