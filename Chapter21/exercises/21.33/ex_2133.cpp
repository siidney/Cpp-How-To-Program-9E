/*
 * =============================================================================
 *
 *       Filename:  ex_2133.cpp
 *
 *    Description:  Exercise 21.33 - Comparing Strings
 *
 *        Version:  1.0
 *        Created:  19/03/18 15:49:23
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
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char str[][5] = { "ZXab", "zxAB", "ZXbc" };

    for (int i = 0; i < 3; ++i) {
        if (strncmp(str[i], "ZXxx", 2) == 0) { printf("Found: %s\n", str[i]); }
    }

    return 0;
}  // end method main
