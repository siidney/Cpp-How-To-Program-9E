/*
 * =====================================================================================
 *
 *       Filename:  fig15_08.cpp
 *
 *    Description:  Fig. 15.8: Using stream manipulators hex, oct, dec and
 *                  setbase
 *
 *        Version:  1.0
 *        Created:  12/09/16 17:29:14
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
    int number;

    std::cout << "Enter a decimal number: ";
    std::cin >> number;  // input number

    // use hex stream manipulator to show octal number
    std::cout << number << " in hexadecimal is: " << std::hex << number
              << std::endl;

    // use oct stream manipulator to show decimal in number
    std::cout << std::dec << number << " in octal is: " << std::oct << number
              << std::endl;

    // use setbase stream manipulator to show decimal number
    std::cout << std::setbase(10) << number << " in decimal is: " << number
              << std::endl;

    return 0;
}
