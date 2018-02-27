/*
 * =============================================================================
 *
 *       Filename:  fig21_28.cpp
 *
 *    Description:  Fig. 21.29: Using atof.
 *
 *        Version:  1.0
 *        Created:  27/02/18 11:10:16
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstdlib>  // atof prototype

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    double d = atof("99.0");  // convert string to double

    std::cout << "The string \"99.0\" converted to double is " << d
              << "\nThe converted value divided by 2 is " << d / 2.0 << std::endl;

    return 0;
}  // end method main
