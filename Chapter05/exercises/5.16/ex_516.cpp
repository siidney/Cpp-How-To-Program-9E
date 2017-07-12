/*
 * =====================================================================================
 *
 *       Filename:  ex_516.cpp
 *
 *    Description:  Exercise 5.16 - Compound Interest Calculations
 *
 *        Version:  1.1
 *        Created:  04/04/16 16:44:33
 *       Revision:  05/04/16 17:53:27
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
    double rate = .05f;
    int principal = 1000;

    std::cout << "Year" << std::setw(21) << "Amount on deposit" << std::endl;

    std::cout << std::fixed << std::setprecision(2);

    for (int year = 0; year <= 10; ++year) {
        int amount = principal * pow(1.0f + rate, year);

        // get dollar and cent amount using division and modulus
        int dollar = amount / 100;
        int cent = amount % 100;

        std::cout << std::setw(4) << year << std::setw(12) << dollar << '.'
                  << cent << std::endl;
    }
    return 0;
}
