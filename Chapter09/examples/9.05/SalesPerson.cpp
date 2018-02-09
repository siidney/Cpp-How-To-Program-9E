/*
 * =====================================================================================
 *
 *       Filename:  SalesPerson.cpp
 *
 *    Description:  Fig. 9.6: SalesPerson class member-function definitions
 *
 *        Version:  1.0
 *        Created:  07/06/16 16:35:54
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "SalesPerson.hpp"

#include <iomanip>
#include <iostream>

SalesPerson::SalesPerson() {
    for (int i = 0; i < monthsPerYear; ++i) {
        sales[i] = 0.0f;
    }
}
// get 12 sales figures from the user
void SalesPerson::getSalesFromUser() {
    double salesFigures;

    for (int i = 1; i <= monthsPerYear; ++i) {
        std::cout << "Enter sales amount for month " << i << ": ";
        std::cin >> salesFigures;

        setSales(i, salesFigures);
    }
}
// set one of the 12 months sales figures
void SalesPerson::setSales(int month, double amount) {
    // test for valid month and amount
    if (month >= 1 && month <= monthsPerYear && amount > 0) {
        sales[month - 1] = amount;
    } else {
        std::cout << "Invalid month or sales figure" << std::endl;
    }
}
// print total annual sales
void SalesPerson::printAnnualSales() {
    std::cout << std::setprecision(2) << std::fixed
              << "\nThe total annual sales are: $" << totalAnnualSales()
              << std::endl;
}
// private utility function to total annual sales
double SalesPerson::totalAnnualSales() {
    double total = 0.0f;

    for (int i = 0; i < monthsPerYear; ++i) {
        total += sales[i];
    }
    return total;
}
