/*
 * =============================================================================
 *
 *       Filename:  ex_2120.cpp
 *
 *    Description:  Exercise 21.20 - Searching for Substrings
 *
 *        Version:  1.0
 *        Created:  14/03/18 11:30:20
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
 * Counts the number of times needles appears in haystack using strstr.
 * @param char*
 * @param char*
 * @param int
 * @return int
 */
int findOccurances(char* haystack, char* needle, int occurances = 0) {
    char* searchPtr = strstr(haystack, needle);

    if (searchPtr == nullptr) { return occurances; }

    std::cout << searchPtr << std::endl;

    return findOccurances(searchPtr + 1, needle, ++occurances);
}  // end method findOccurances

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char haystack[255];
    char needle[255];

    std::cout << "Enter the string to search: ";
    std::cin.getline(haystack, 255);

    std::cout << "Enter the string to search for: ";
    std::cin.getline(needle, 255);

    printf("\'%s\' found %d times in given string.\n",
            needle, findOccurances(haystack, needle));

    return 0;
}  // end method main
