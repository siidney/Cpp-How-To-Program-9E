/*
 * =============================================================================
 *
 *       Filename:  fig21_29.cpp
 *
 *    Description:  Fig. 21.29: Using atoi.
 *
 *        Version:  1.0
 *        Created:  27/02/18 11:13:01
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstdlib>  // atoi prototype

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    int i = atoi("2593");  // convert string to int

    std::cout << "The string \"2593\" converted to int is " << i
              << "\nThe converted value minus 593 is " << i - 593 << std::endl;

    return 0;
}  // end method main
