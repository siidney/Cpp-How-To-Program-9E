/*
 * =============================================================================
 *
 *       Filename:  fig21_26.cpp
 *
 *    Description:  Fig. 21.26: Using strlen
 *
 *        Version:  1.0
 *        Created:  27/02/18 11:05:58
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstring>  // prototype for strlen

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char *string1 = "abcdefghijklmnopqrstuvwxyz";
    char *string2 = "four";
    char *string3 = "Boston";

    std::cout << "The length of \"" << string1 << "\" is " << strlen(string1)
              << "\nThe length of \"" << string2 << "\" is " << strlen(string2)
              << "\nThe length of \"" << string3 << "\" is " << strlen(string3)
              << std::endl;

    return 0;
}  // end method main
