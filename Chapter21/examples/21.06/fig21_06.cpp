/*
 * =============================================================================
 *
 *       Filename:  fig21_06.cpp
 *
 *    Description:  Fig. 21.6: Printing an unsigned integer in bits.
 *
 *        Version:  1.0
 *        Created:  21/02/18 12:44:43
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <iomanip>

void displayBits(unsigned);  // prototype

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    unsigned inputValue;  // integral value to print in binary

    std::cout << "Enter an unsigned integer: ";
    std::cin >> inputValue;

    displayBits(inputValue);

    return 0;
}  // end method main

/**
 * Display bits of an unsigned integer value.
 */
void displayBits(unsigned value) {
    const int SHIFT = 8 * sizeof(unsigned) - 1;
    const unsigned MASK = 1 << SHIFT;

    std::cout << std::setw(10) << value << " = ";

    // display bits
    for (unsigned int i = 1; i <= SHIFT + 1; ++i) {
        std::cout << (value & MASK ? '1' : '0');
        value <<= 1;  // shift value left by 1

        if (i % 8 == 0) { std::cout << ' '; }
    }

    std::cout << std::endl;
}  // end method displayBits
