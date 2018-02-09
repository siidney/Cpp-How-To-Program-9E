/*
 * =====================================================================================
 *
 *       Filename:  fig11_05.cpp
 *
 *    Description:  Fig. 11.5: Demonstrating class PhoneNumber's overloaded
 *                  stream insertion and stream extraction operators
 *
 *        Version:  1.0
 *        Created:  08/07/16 18:30:18
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "PhoneNumber.hpp"

#include <iostream>

int main(int argc, const char *argv[]) {
    PhoneNumber phone;

    std::cout << "Enter phone number in the form (123) 456-7890:" << std::endl;
    // std::cin >> phone invokes operator>> by implicitly issuing
    // the non-member function call operator>>(std::cin, phone)
    std::cin >> phone;

    std::cout << "The phone number entered was: ";
    // std::cout << phone invokes operator<< by implicitly issuing
    // the non-member function call operator<<(std::cout, phone)
    std::cout << phone << std::endl;

    return 0;
}
