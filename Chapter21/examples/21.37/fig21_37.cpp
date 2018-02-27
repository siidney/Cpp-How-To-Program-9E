/*
 * =============================================================================
 *
 *       Filename:  fig21_37.cpp
 *
 *    Description:  Fig. 21.37: Using strpbrk.
 *
 *        Version:  1.0
 *        Created:  27/02/18 11:39:50
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstring>  // strpbrk prototype

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    const char *string1 = "This is a test";
    const char *string2 = "beware";

    std::cout << "Of the characters in \"" << string2 << "\"\n'"
              << *strpbrk(string1, string2) << "\' is the first character "
              << "to appear in\n\"" << string1 << '\"' << std::endl;

    return 0;
}  // end method main
