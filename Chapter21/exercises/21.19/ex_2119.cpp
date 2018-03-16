/*
 * =============================================================================
 *
 *       Filename:  ex_2119.cpp
 *
 *    Description:  Exercise 21.19 - Searching for Substrings
 *
 *        Version:  1.0
 *        Created:  13/03/18 12:56:53
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
 * Finds and prints all occurances of needle in haystack using strstr.
 * @param char*
 * @param char*
 */
void findSubStrings(char* haystack, char* needle) {
    char* searchPtr = strstr(haystack, needle);

    if (searchPtr == nullptr) { return; }

    std::cout << searchPtr << std::endl;

    findSubStrings(searchPtr + 1, needle);
}  // end method findSubStrings

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char haystack[255];
    char needle[255];

    std::cout << "Enter a line of text: ";
    std::cin.getline(haystack, 255);

    std::cout << "Enter search string: ";
    std::cin.getline(needle, 255);

    findSubStrings(haystack, needle);

    return 0;
}  // end method main
