/*
 * =====================================================================================
 *
 *       Filename:  ex_531.cpp
 *
 *    Description:  Exercise 5.31 - Tax Plan Alternatives; The "FairTax"
 *
 *        Version:  1.0
 *        Created:  11/04/16 09:54:18
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

const double FAIR_TAX = 0.23f;

double calculateTax(double);

int main(int argc, const char *argv[]) {
    double dAmount = 0.0f;
    double dAmountTotal = 0.0f;

    std::cout << "Program to calculate tax rate of 23%" << std::endl;

    while (dAmount != -1) {
        std::cout << "Enter expenses (-1 to quit): ";
        std::cin >> dAmount;

        if (dAmount > 0) {
            dAmountTotal += dAmount;
        }
    }

    std::cout << "Total amount: " << dAmountTotal << std::endl;
    std::cout << "Tax: " << calculateTax(dAmountTotal) << std::endl;

    return 0;
}
// returns the tax rate
double calculateTax(double baseAmount) { return baseAmount * FAIR_TAX; }
