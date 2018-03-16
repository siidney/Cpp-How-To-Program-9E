/*
 * =============================================================================
 *
 *       Filename:  ex_2116.cpp
 *
 *    Description:  Exercise 21.16 - istream, getline.
 *
 *        Version:  1.0
 *        Created:  13/03/18 10:45:28
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cctype>

const unsigned char UPPER = 1 << 0;
const unsigned char LOWER = 1 << 1;

/**
 * Prints the given char array in upper or lower case.
 * @param unsigned char
 * @param char[]
 */
void printArray(unsigned char options, char s[]) {
    if (options & UPPER) {
        for (int i = 0; s[i] != '\0'; ++i) {
            std::cout << static_cast<char>(toupper(s[i]));
        }
        std::cout << std::endl;
    }
    if (options & LOWER) {
        for (int i = 0; s[i] != '\0'; ++i) {
            std::cout << static_cast<char>(tolower(s[i]));
        }
        std::cout << std::endl;
    }
}  // end method printArray
/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char s[100];

    std::cout << "Enter a line of text: ";
    std::cin.getline(s, 100);

    printArray(UPPER | LOWER, s);

    return 0;
}  // end method main
