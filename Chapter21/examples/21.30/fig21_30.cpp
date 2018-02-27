/*
 * =============================================================================
 *
 *       Filename:  fig21_30.cpp
 *
 *    Description:  Fig. 21.30: Using atol.
 *
 *        Version:  1.0
 *        Created:  27/02/18 11:15:08
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstdlib> // atol prototype

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    long x = atol("10000000");  // convert string to long

    std::cout << "The string \"10000000\" converted to long is " << x
              << "\nThe converted value divided by 2 is " << x / 2 << std::endl;

    return 0;
}  // end method main
