/*
 * =============================================================================
 *
 *       Filename:  ex_2124.cpp
 *
 *    Description:  Exercise 21.24 - Strings Beginning with b.
 *
 *        Version:  1.0
 *        Created:  14/03/18 13:03:08
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstring>

/**
 * Prints every string beginning with needle from haystack.
 * @param char*
 * @param char
 */
void printWords(char* haystack, char needle) {
    const char DELIM = ' ';

    char* strPtr = strtok(haystack, &DELIM);

    while (strPtr != nullptr) {
        if (strPtr[0] == needle) { std::cout << strPtr << std::endl; }

        strPtr = strtok(nullptr, &DELIM);
    }
}  // end method printWords

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    const char NEEDLE = 'b';
    char haystack[255];

    std::cout << "Enter a string to search: ";
    std::cin.getline(haystack, 255);

    std::cout << "Every occurance starting with \'" << NEEDLE << "\':\n";

    printWords(haystack, NEEDLE);

    return 0;
}  // end method main
