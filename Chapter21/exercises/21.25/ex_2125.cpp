/*
 * =============================================================================
 *
 *       Filename:  ex_2125.cpp
 *
 *    Description:  Exercise 21.25 - Strings ending with ED.
 *
 *        Version:  1.0
 *        Created:  14/03/18 23:06:10
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
 * Prints every word from the given string ending in needle.
 * @param const char*
 * @param char
 */
void printWords(char* haystack, const char* needle) {
    const char DELIM = ' ';

    char* strPtr = strtok(haystack, &DELIM);

    while (strPtr != nullptr) {
        size_t diff = strlen(strPtr) - strlen(needle);

        if (strcmp(&strPtr[diff], needle) == 0) {
            std::cout << strPtr << std::endl;
        }

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
    const char NEEDLE[4] = "ED.";
    char haystack[255];

    std::cout << "Enter a string to search: ";
    std::cin.getline(haystack, 255);

    std::cout << "Every occurance ending with \'" << NEEDLE << "\':\n";

    printWords(haystack, NEEDLE);

    return 0;
}  // end method main
