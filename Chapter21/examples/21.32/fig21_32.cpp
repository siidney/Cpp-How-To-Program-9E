/*
 * =============================================================================
 *
 *       Filename:  fig21_32.cpp
 *
 *    Description:  Fig. 21.32: Using strol.
 *
 *        Version:  1.0
 *        Created:  27/02/18 11:21:41
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstdlib>  // strtol prototype

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    long x;
    const char *string1 = "-1234567abc";
    char *remainderPtr;

    x = strtol(string1, &remainderPtr, 0);  // convert characters to long

    std::cout << "The original string is \"" << string1
              << "\"\nThe converted value is " << x
              << "\nThe remainder of the original string is \"" << remainderPtr
              << "\"\nThe converted value plus 567 is " << x + 567 << std::endl;

    return 0;
}  // end method main
