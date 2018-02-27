/*
 * =============================================================================
 *
 *       Filename:  fig21_08.cpp
 *
 *    Description:  Fig. 21.8: Bitwise AND, inclusive OR, exclusive OR, and
 *                  complement operators.
 *
 *        Version:  1.0
 *        Created:  21/02/18 13:44:45
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
    unsigned number1;
    unsigned number2;
    unsigned mask;
    unsigned setBits;

    // demonstrate bitwise &
    number1 = 2179876355;
    mask = 1;
    std::cout << "The result of combining the following\n";
    displayBits(number1);
    displayBits(number1 & mask);
    std::cout << "using the bitwise AND operator & is\n";
    displayBits(number1 & mask);

    // demonstrate bitwise |
    number1 = 15;
    setBits = 241;
    std::cout << "\nThe result of combining the following\n";
    displayBits(number1);
    displayBits(setBits);
    std::cout << "using the bitwise inclusive OR operator | is\n";
    displayBits(number1 | setBits);

    // demonstrate bitwise exclusive OR
    number1 = 139;
    number2 = 199;
    std::cout << "\nThe result of combining the following\n";
    displayBits(number1);
    displayBits(number2);
    std::cout << "using the bitwise exclusive OR operator ^ is\n";
    displayBits(number1 ^ number2);

    // demonstrate bitwise complement
    number1 = 21845;
    std::cout << "\nThe one's complement of\n";
    displayBits(number1);
    std::cout << " is ";
    displayBits(~number1);

    return 0;
}  // end method main

/**
 * Display bits of an unsigned integer value
 */
void displayBits(unsigned value) {
    const int SHIFT = 8 * sizeof(unsigned) - 1;
    const unsigned MASK = 1 << SHIFT;

    std::cout << std::setw(10) << value << " = ";

    // display bits
    for (unsigned int i = 1; i <= SHIFT; ++i) {
        std::cout << (value & MASK ? '1' : '0');
        value <<= 1;  // shift value left by 1

        if (i % 8 == 0) { std::cout << ' '; }  // output a space after 8 bits
    }
    std::cout << std::endl;
}  // end method displayBits
