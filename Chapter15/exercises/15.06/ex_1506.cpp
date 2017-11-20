/*
 * =====================================================================================
 *
 *       Filename:  ex_1506.cpp
 *
 *    Description:  Exercise 15.06 - Write C++ Statements
 *
 *        Version:  1.0
 *        Created:  12/10/16 13:59:49
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
#include <limits>

int main(int argc, const char *argv[]) {
    // a) Print integer 40000 left justified in a 15-digit field
    std::cout << std::setw(15) << std::left << 40000 << std::endl;

    // b) Read a string into character array variable state
    char state[11];

    std::cout << "Enter a 10 char string: ";

    std::cin.get(state, 11);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << state << std::endl;

    // c) Print 200 with and without a sign
    std::cout << std::showpos << 200 << "\n"
              << std::noshowpos << 200 << std::endl;

    // d) Print the decimal value 100 in hexidecimal form preceded by 0x
    std::cout << std::showbase << std::hex << 100 << std::endl;

    // e) Read characters into array charArray until the character 'p' is
    // encountered, up to a LIMIT of 10 characters (including the terminating
    // null character). Extract the deLIMITer from the input stream and discard
    // it.

    const int LIMIT = 11;

    char charArray[LIMIT];

    std::cout << "Enter up to 10 chars 'p' to end input:\n";

    std::cin.getline(charArray, 10, 'p');
    std::cout << charArray;

    // f) Print 1.234 in a 9-digit field with preceeding zeros
    std::cout << std::right << std::setw(9) << std::setfill('0') << 1.234
              << std::endl;

    return 0;
}
