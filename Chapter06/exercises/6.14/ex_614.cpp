/*
 * =====================================================================================
 *
 *       Filename:  ex_614.cpp
 *
 *    Description:  Exericse 6.14 - Rounding Numbers
 *
 *        Version:  1.0
 *        Created:  11/04/16 23:21:22
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

int roundToInteger(double);
int roundToTenths(double);
int roundToHundreths(double);
int roundToThousandths(double);

int main(int argc, const char *argv[]) {
    double num = 0.0f;

    std::cout << "Program to round numbers to int, 10s, 100 and 1000"
              << std::endl;

    while (num != -1) {
        std::cout << "Enter number to round (-1 to exit): ";
        std::cin >> num;

        std::cout << "Original: " << num
                  << "\nroundToInteger: " << roundToInteger(num)
                  << "\nroundToTenths: " << roundToTenths(num)
                  << "\nroundToHundredths: " << roundToHundreths(num)
                  << "\nroundToThousandths: " << roundToThousandths(num)
                  << std::endl;
    }
    return 0;
}
int roundToInteger(double num) { return floor(num + .5); }
int roundToTenths(double num) { return floor(num * 10 + .5) / 10; }
int roundToHundreths(double num) { return floor(num * 100 + .5) / 100; }
int roundToThousandths(double num) { return floor(num * 1000 + .5) / 1000; }
