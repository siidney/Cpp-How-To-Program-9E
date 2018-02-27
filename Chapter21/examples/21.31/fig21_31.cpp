/*
 * =============================================================================
 *
 *       Filename:  fig21_31.cpp
 *
 *    Description:  Fig 21.31: Using strtod.
 *
 *        Version:  1.0
 *        Created:  27/02/18 11:18:05
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstdlib>  // strtod prototype

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    double d;
    const char *string1 = "$1.2% are admitted";
    char *stringPtr;

    d = strtod(string1, &stringPtr);  // convert characters to double

    std::cout << "The string \"" << string1
              << "\" is converted to the\ndouble value " << d
              << " and the string \"" << stringPtr << "\"" << std::endl;
    return 0;
}  // end method main
