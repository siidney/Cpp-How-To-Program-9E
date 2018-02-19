/*
 * =====================================================================================
 *
 *       Filename:  ex_1514.cpp
 *
 *    Description:  Exercise 15.14 - Reading Phone Numbers with an Overloaded
 *                  Stream Extraction Operator.
 *
 *        Version:  1.0
 *        Created:  13/10/16 18:10:14
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#include "PhoneNumber.hpp"

int main(int argc, const char *argv[]) {
    PhoneNumber phone;

    std::cout << "Enter phone number in the form (800) 555-1212: ";
    // std::cin >> phone invokes operator>> by implicitly issuing
    // the non-member function call operator>>(std::cin, phone)
    std::cin >> phone;

    if (std::cin.fail()) {
        std::cout << "ERROR: Incorrect Input" << std::endl;
    } else {
        std::cout << "The phone number entered was: ";
        // std::cout << phone invokes operator<< by implicitly issuing
        // the non-member function call operator<<(std::cout, phone)
        std::cout << phone << std::endl;
    }

    return 0;
}
