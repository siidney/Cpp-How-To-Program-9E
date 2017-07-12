/*
 * =====================================================================================
 *
 *       Filename:  ex_722.cpp
 *
 *    Description:  Exercise 7.22 - Sales Summary
 *                  NOTE: There is no data validation or error checking
 *
 *        Version:  1.0
 *        Created:  22/04/16 17:19:41
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

struct ticket {
    int salesPerson;
    int productNumber;
    int value;
};

const int salesPeople = 4;
const int totalProducts = 5;

void processTicket(int[][totalProducts], ticket);

int main(int argc, const char *argv[]) {
    int arrSales[salesPeople][totalProducts] = {{}};

    // change the loop to enter multiples for each salesperson
    // I personally cannot be bothered to spend hours inputting data
    for (int sp = 0; sp < salesPeople; ++sp) {
        ticket salesTicket;

        salesTicket.salesPerson = sp;

        std::cout << "Enter Product Number 1-5: ";
        std::cin >> salesTicket.productNumber;
        // decrement to allow for zero indexed array
        --salesTicket.productNumber;

        std::cout << "Enter total dollar value of product: ";
        std::cin >> salesTicket.value;

        processTicket(arrSales, salesTicket);
    }

    // print totals
    for (int sp = 0; sp < salesPeople; ++sp) {
        std::cout << "\nSales Person: " << sp + 1 << std::endl;
        for (int pr = 0; pr < totalProducts; ++pr) {
            std::cout << "Product: " << pr + 1 << ": " << arrSales[sp][pr]
                      << std::endl;
        }
    }
    return 0;
}
// process a single sales persons sales
void processTicket(int arrSales[][totalProducts], ticket tck) {
    arrSales[tck.salesPerson][tck.productNumber] += tck.value;
}
