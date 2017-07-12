/*
 * =====================================================================================
 *
 *       Filename:  ex_511.cpp
 *
 *    Description:  Exercise 5.11: Compound Interest
 *
 *        Version:  1.1
 *        Created:  04/04/16 16:44:33
 *       Revision:  04/04/16 18:23:34
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
    double amount;
    double principal = 1000.0f;

    std::cout << "Year" << std::setw(8) << "Rate" << std::setw(21)
              << "Amount on deposit" << std::endl;

    std::cout << std::fixed << std::setprecision(2);

    // increment rate
    for (int rate = 5; rate <= 10; rate++) {
        for (int year = 0; year <= 10; ++year) {
            // set correct rate / 100
            amount = principal * pow(1.0f + rate / 100.0f, year);

            std::cout << std::setw(4) << year << std::setw(8) << rate / 100.0f
                      << std::setw(15) << amount << std::endl;
        }
        std::cout << std::endl;
    }
    return 0;
}
