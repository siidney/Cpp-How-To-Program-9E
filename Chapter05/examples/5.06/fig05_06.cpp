/*
 * =====================================================================================
 *
 *       Filename:  fig05_06.cpp
 *
 *    Description:  Fig. 5.6: Compound interest calculations with for.
 *
 *        Version:  1.0
 *        Created:  04/04/16 16:44:33
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <cmath>
#include <iomanip>
#include <iostream>

int main(int argc, const char *argv[]) {
    double principal = 1000.0f;
    double rate = .05f;

    std::cout << "Year" << std::setw(21) << "Amount on deposit" << std::endl;

    std::cout << std::fixed << std::setprecision(2);

    for (int year = 0; year <= 10; ++year) {
        double amount = principal * pow(1.0f + rate, year);

        std::cout << std::setw(4) << year << std::setw(21) << amount
                  << std::endl;
    }
    return 0;
}
