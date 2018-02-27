/*
 * =============================================================================
 *
 *       Filename:  fig21_33.cpp
 *
 *    Description:  Fig. 21.33: Using strtoul.
 *
 *        Version:  1.0
 *        Created:  27/02/18 11:24:33
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstdlib>  // strtoul prototype

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    unsigned long x;
    const char *string1 = "1234567abc";
    char *remainderPtr;

    // convert a sequence of characters to unsigned long
    x = strtoul(string1, &remainderPtr, 0);

    std::cout << "The original string is \"" << string1
              << "\"\nThe converted value is " << x
              << "\nThe remainder of the original string is \"" << remainderPtr
              < "\"\nThe converted value minux 567 is " << x - 567 << std::endl;

    return 0;
}  // end method main
