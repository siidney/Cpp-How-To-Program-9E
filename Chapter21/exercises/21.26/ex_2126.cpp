/*
 * =============================================================================
 *
 *       Filename:  ex_2126.cpp
 *
 *    Description:  Exercise 21.26 - Displaying Characters for Given ASCII Codes.
 *
 *        Version:  1.0
 *        Created:  14/03/18 23:59:09
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

/**
 * Prints the corresponding char for the given ASCII code.
 * @param int
 * @return char
 */
char printChar(unsigned int ASCII) {
    if (ASCII <= 255) { return static_cast<char>(ASCII); }
    return 0;
}  // end method printChar

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    // for 0 - 255 formatting is messed up due to printing special chars
    for (int i = 33; i < 64; ++i) {
        std::cout << i << ' ' << printChar(i) << '\t'
                  << (i + 64) << ' ' << printChar(i + 64) << std::endl;
    }

    return 0;
}  // end method main
