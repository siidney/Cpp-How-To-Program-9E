/*
 * =============================================================================
 *
 *       Filename:  fig21_38.cpp
 *
 *    Description:  Fig. 21.38: Using strrchr.
 *
 *        Version:  1.0
 *        Created:  27/02/18 11:42:29
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstring>  // strrchr prototype

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    const char *string1 = "A zoo has many animals including zebras";
    char c = 'z';

    std::cout << "string1 = " << string1 << "\n" << std::endl;
    std::cout << "The remainder of string1 beginnign with the\n"
              << "last occurance of character '" << c
              << "' is: \"" << strrchr(string1, c) << '\"' << std::endl;

    return 0;
}  // end method main
