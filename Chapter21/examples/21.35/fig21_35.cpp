/*
 * =============================================================================
 *
 *       Filename:  fig21_34.cpp
 *
 *    Description:  Fig. 21.34: Using strchr.
 *
 *        Version:  1.0
 *        Created:  27/02/18 11:30:32
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstring>  // strchr prototype

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    const char *string1 = "This is a test";
    char character1 = 'a';
    char character2 = 'z';

    // search for character1 in string1
    if (strchr(string1, character1) != nullptr) {
        std::cout << '\'' << character1 << "' was found in \"" << string1 << "\".\n";
    } else {
        std::cout << '\'' << character1 << "' was not found in \"" << string1 << "\".\n";
    }

    // search for character2 in string1
    if (strchr(string1, character2) != nullptr) {
        std::cout << '\'' << character2 << "' was found in \"" << string1 << "\".\n";
    } else {
        std::cout << '\'' << character2 << "' was not found in \"" << string1 << "\".\n";
    }

    return 0;
}  // end method main
