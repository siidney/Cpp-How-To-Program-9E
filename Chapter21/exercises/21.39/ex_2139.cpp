/*
 * =============================================================================
 *
 *       Filename:  ex_2139.cpp
 *
 *    Description:  Exercise 21.39 - Alphabetizing Strings
 *
 *        Version:  1.0
 *        Created:  26/03/18 12:49:33
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
 * Sorting function for qsort
 * @param const char*
 * @param const char*
 * @return int
 */
int compare(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}  // end method compare

/**
 * Alphabetises the given array.
 * @param const char*[]
 * @param int
 */
void alphabetise(const char* arr[], int n) {
    qsort(arr, n, sizeof(const char*), compare);
}  // end method alphabetise


/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    const char* townNames[10] = {
        "Garmsby", "Wellspring", "Wigston", "Wolfden", "Eastborne",
        "Luton", "Butterpond", "Aylesbury", "Croydon", "Kald"};

    for (int i = 0; i < 10; ++i) { printf("%s\n", townNames[i]); }

    alphabetise(townNames, 10);

    std::cout << std::endl;

    for (int i = 0; i < 10; ++i) { printf("%s\n", townNames[i]); }

    return 0;
}  // end method main
