/*
 * =====================================================================================
 *
 *       Filename:  ex_1507.cpp
 *
 *    Description:  Exercise 15.07 - Inputting Decimal, Octal and Hexidecimal
 *                  Values
 *
 *        Version:  1.0
 *        Created:  12/10/16 17:00:05
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iomanip>
#include <iostream>

int main(int argc, const char *argv[]) {
    int intDec, intOct, intHex = 0;

    std::cout << "Enter 3 ints in decimal, octal and hexadecimal formats: ";
    std::cin >> intDec >> intOct >> intHex;

    std::cout << std::left << std::setw(6) << "dec" << std::setw(6) << "oct"
              << std::setw(3) << "hex\n";

    std::cout << std::setw(6) << std::dec << intDec << std::setw(6) << std::oct
              << intDec << std::setw(6) << std::hex << intDec << "\n";

    std::cout << std::setw(6) << std::dec << intOct << std::setw(6) << std::oct
              << intOct << std::setw(6) << std::hex << intOct << "\n";

    std::cout << std::setw(6) << std::dec << intHex << std::setw(6) << std::oct
              << intHex << std::setw(6) << std::hex << intHex << "\n";

    return 0;
}
