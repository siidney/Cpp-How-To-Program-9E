/*
 * =====================================================================================
 *
 *       Filename:  ex_313.cpp
 *
 *    Description:  Exercise 3.13 - Invoice Class
 *
 *        Version:  1.0
 *        Created:  21/03/16 02:17:59
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#include "Invoice.hpp"

int main(int argc, const char *argv[]) {
    Invoice invoice1("12345", "Hammer", 12, 6);

    std::cout << "Part Number: " << invoice1.getPartNumber();
    std::cout << "\nPart Description: " << invoice1.getPartDescription();
    std::cout << "\n"
              << invoice1.getItemQuantity() << " x "
              << invoice1.getPricePerItem();
    std::cout << " = " << invoice1.getInvoiceAmount() << std::endl;

    return 0;
}
