/*
 * =====================================================================================
 *
 *       Filename:  ex_626.cpp
 *
 *    Description:  Exercise 6.26 - Celsius and Farenheit Temperatures
 *
 *        Version:  1.0
 *        Created:  14/04/16 18:04:23
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iomanip>
#include <iostream>

double celsius(double);
double farenheit(double);

int main(int argc, const char *argv[]) {
    // CELSIUS TO FARENHEIT
    std::cout << "Farenheit equivalent of Celsius 0 to 100\n" << std::endl;

    std::cout << "Celsius\tFarenheit" << std::fixed << std::setprecision(1)
              << std::endl;

    for (double c = 0.0; c <= 100.0; c++) {
        std::cout << c << "\t" << farenheit(c) << std::endl;
    }

    // FARENHEIT TO CELSIUS
    std::cout << "\nCelsius equivalent of Farenheit 32 to 212\n" << std::endl;

    std::cout << "Farenheit\tCelsius" << std::fixed << std::setprecision(1)
              << std::endl;

    for (int f = 32; f <= 212; f++) {
        std::cout << f << "\t" << celsius(f) << std::endl;
    }

    return 0;
}
// convert farenheit to celsius
double celsius(double f) { return (f - 32) * 5 / 9; }
// convert celsius to farenheit
double farenheit(double c) { return c * 9 / 5 + 32; }
