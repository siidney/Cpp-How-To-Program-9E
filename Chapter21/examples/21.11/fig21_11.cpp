/*
 * =============================================================================
 *
 *       Filename:  fig21_11.cpp
 *
 *    Description:  Fig. 21.11: Using the bitwise shift operators.
 *
 *        Version:  1.0
 *        Created:  21/02/18 13:58:27
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
    unsigned number1 = 960;

    // demonstrate bitwise left shift
    std::cout << "The result of left shifting\n";
    displayBits(number1);
    std::cout << "8 but positions using the left-shift operator is\n";
    displayBits(number1 << 8);

    // demonstrate bitwise right shift
    std::cout << "\nThe result of right shifting\n";
    displayBits(number1);
    std::cout << "8 bit positions using the right-shift operator is\n";
    displayBits(number1 >> 8);

    if (true)
        std::cout << ' ';

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
    for (unsigned i = 0; i <= SHIFT; ++i) {
        std::cout << (value & MASK ? '1' : '0');
        value <<= 1;  // shift value left by 1

        if (i % 8 == 0) { std::cout << ' '; }  // output a space after 8 bits
    }

    std::cout << std::endl;
}  // end method displayBits
