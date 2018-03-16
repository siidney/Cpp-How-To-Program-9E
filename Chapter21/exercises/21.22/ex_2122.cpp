/*
 * =============================================================================
 *
 *       Filename:  ex_2122.cpp
 *
 *    Description:  Exercise 21.22 - Searching for Characters.
 *
 *        Version:  1.0
 *        Created:  14/03/18 12:07:48
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

const int ALPHABET_SIZE = 26;

/**
 * Finds the number of times needle occurs in haystack using strchr.
 * @param char*
 * @param char
 * @param occurances
 * @return int
 */
int findOccurances(char* haystack, char needle, int occurances = 0) {
    char* charPtr = strchr(haystack, needle);

    if (charPtr == nullptr) { return occurances; }

    return findOccurances(charPtr + 1, needle, ++occurances);
}  // end method findOccurances

/**
 * Prints the given array in tabular format.
 */
void printArray(int tally[]) {
    char c = 'a';
    for (int i = 0; i < ALPHABET_SIZE / 2; ++i, ++c) {
        printf("%c = %d\t %c = %d\n",
                c, tally[i],
                c + (ALPHABET_SIZE / 2), tally[i + (ALPHABET_SIZE / 2)]);
    }
}  // end method printArray

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char haystack[255];

    std::cout << "Enter a string to search: ";
    std::cin.getline(haystack, 255);

    // tally of alphabet chars
    int tally[ALPHABET_SIZE];
    int i = 0;

    for (char c = 'a' ; c <= 'z'; ++c, ++i) {
        tally[i] = findOccurances(haystack, c);
        tally[i] += findOccurances(haystack, toupper(c));
    }

    std::cout << "Number of occurances for each letter: " << std::endl;
    printArray(tally);

    return 0;
}  // end method main
