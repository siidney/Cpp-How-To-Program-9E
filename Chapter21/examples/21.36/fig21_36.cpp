/*
 * =============================================================================
 *
 *       Filename:  fig21_36.cpp
 *
 *    Description:  Fig. 21.36: Using strcspn.
 *
 *        Version:  1.0
 *        Created:  27/02/18 11:36:59
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstring>  // strcspn prototype

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    const char *string1 = "The value is 3.14159";
    const char *string2 = "1234567890";

    std::cout << "string1 = " << string1 << "\nstring2 = " << string2
              << "\n\nThe length of the initial segment of string1"
              << "\ncontaining no characters from string2 = "
              << strcspn(string1, string2) << std::endl;

    return 0;
}  // end method main
