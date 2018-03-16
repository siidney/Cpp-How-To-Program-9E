/*
 * =============================================================================
 *
 *       Filename:  ex_2113.cpp
 *
 *    Description:  Exercise 21.13 - Testing Characters with the <cctype>
 *                  Functions.
 *
 *        Version:  1.0
 *        Created:  12/03/18 09:58:07
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <bitset>
#include <cctype>

/**
 * Prints the results of the given boolean operator
 * @param bool
 */
void printBool(bool b) {
    std::cout << ((b) ? "true" : "false") << std::endl;
}  // end method printBool

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char c = ' ';

    std::cout << "Enter a char: ";
    std::cin >> c;

    std::cout << "isdigit: ";
    printBool(isdigit(c));

    std::cout << "isalpha: ";
    printBool(isalpha(c));

    std::cout << "isalnum: ";
    printBool(isalnum(c));

    std::cout << "isxdigit: ";
    printBool(isxdigit(c));

    std::cout << "islower: ";
    printBool(islower(c));

    std::cout << "isupper: ";
    printBool(isupper(c));

    std::cout << "isspace: ";
    printBool(isspace(c));

    std::cout << "iscntrl: ";
    printBool(iscntrl(c));

    std::cout << "ispunct: ";
    printBool(ispunct(c));

    std::cout << "isprint: ";
    printBool(isprint(c));

    std::cout << "isgraph: ";
    printBool(isgraph(c));

    std::cout << "tolower: " << static_cast<char>(tolower(c)) << std::endl;
    std::cout << "toupper: " << static_cast<char>(toupper(c)) << std::endl;

    return 0;
}  // end method main
