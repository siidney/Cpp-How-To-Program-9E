/*
 * =====================================================================================
 *
 *       Filename:  ex_627.cpp
 *
 *    Description:  Exercise 6.27 - Find the Minimum
 *
 *        Version:  1.0
 *        Created:  14/04/16 18:23:58
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

double minimum(double, double, double);

int main(int argc, const char *argv[]){
    double d1, d2, d3;

    std::cout << "Program to find the smallest of 3 doubles\n" << std::endl;

    std::cout << "Enter three double values: ";
    std::cin >> d1 >> d2 >> d3;

    std::cout << "Smallest: " << minimum(d1, d2, d3) << std::endl;
    return 0;
}
// finds and returns the smallest of 3 values
double minimum(double d1, double d2, double d3){
    double minimum = d1;

    if(d2 < minimum)
        minimum = d2;

    return (d3 < minimum) ? d3 : minimum;
}
