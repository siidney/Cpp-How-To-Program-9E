/*
 * =============================================================================
 *
 *       Filename:  fig21_40.cpp
 *
 *    Description:  Fig. 21.40: Using strstr.
 *
 *        Version:  1.0
 *        Created:  27/02/18 11:48:10
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstring>  // strstr prototype

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    const char *string1 = "abcdefabcdef";
    const char *string2 = "def";

    std::cout << "string1 = " << string1 << "\nstring2 = " << string2
              << "\n\nThe remainder of string1 beginning with the\n"
              << "first occurance of string2 is: "
              << strstr(string1, string2) << std::endl;

    return 0;
}  // end method main
