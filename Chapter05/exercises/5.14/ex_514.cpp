/*
 * =====================================================================================
 *
 *       Filename:  ex_514.cpp
 *
 *    Description:  Exercise 5.14 - Calculating Total Sales
 *
 *        Version:  1.0
 *        Created:  05/04/16 16:47:13
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

double getPrice(int, int);

int main(int argc, const char *argv[]) {
    double total = 0.0f;
    int product = 0, quantity = 0;

    std::cout << "Program to add retail prices for 5 products.\n" << std::endl;

    while (product != -1) {
        std::cout
            << "Enter the product number and quantity sold (-1 to quit): ";
        std::cin >> product;

        if (product != -1) {
            std::cin >> quantity;

            total += getPrice(product, quantity);

            printf("Running total: $%.2f\n", total);
        }
    }
    return 0;
}
double getPrice(int product, int quantity) {
    switch (product) {
        case 1:
            return 2.98 * quantity;
            break;
        case 2:
            return 4.50 * quantity;
            break;
        case 3:
            return 9.98 * quantity;
            break;
        case 4:
            return 4.49 * quantity;
            break;
        case 5:
            return 6.87 * quantity;
            break;
        default:
            std::cout << "Incorrect product number entered." << std::endl;
            return 0.0f;
            break;
    }
}
