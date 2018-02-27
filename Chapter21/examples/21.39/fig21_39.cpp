/*
 * =============================================================================
 *
 *       Filename:  fig21_39.cpp
 *
 *    Description:  Fig. 21.39: Using strspn
 *
 *        Version:  1.0
 *        Created:  27/02/18 11:45:38
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstring>  // strspn prototype

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    const char *string1 = "The value is 3.14159";
    const char *string2 = "aehils Tuv";

    std::cout << "string1 = " << string1 << "\nstring2 = " << string2
              << "\n\nThe length of the initial segment of string1\n"
              << "containing only characters from string2 = "
              << strspn(string1, string2) << std::endl;

    return 0;
}  // end method main
