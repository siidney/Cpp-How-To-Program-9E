/*
 * =====================================================================================
 *
 *       Filename:  ex_710.cpp
 *
 *    Description:  Exercise 7.10 - Salesperson Salary Ranges
 *
 *        Version:  1.0
 *        Created:  21/04/16 16:52:52
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

const size_t salaryRange = 9;

int main(int argc, const char *argv[]) {
    int arrSalaries[salaryRange] = {};

    int choice = 0;

    while (choice != -1) {
        std::cout << "Enter salary (-1 to quit): ";
        std::cin >> choice;

        if (choice == -1) {
            break;
        } else if (choice > 999) {
            ++arrSalaries[8];
        } else if (choice > 899) {
            ++arrSalaries[7];
        } else if (choice > 799) {
            ++arrSalaries[6];
        } else if (choice > 699) {
            ++arrSalaries[5];
        } else if (choice > 599) {
            ++arrSalaries[4];
        } else if (choice > 499) {
            ++arrSalaries[3];
        } else if (choice > 399) {
            ++arrSalaries[2];
        } else if (choice > 299) {
            ++arrSalaries[1];
        } else if (choice >= 200) {
            ++arrSalaries[0];
        }
    }

    // show results
    for (unsigned int i = 0; i < salaryRange; ++i) {
        if (i != salaryRange - 1) {
            std::cout << "$" << i + 2 << "00-" << i + 2
                      << "99: " << arrSalaries[i] << std::endl;
        } else {
            std::cout << "$1000+:   " << arrSalaries[i] << std::endl;
        }
    }

    return 0;
}
