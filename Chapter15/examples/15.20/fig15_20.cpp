/*
 * =====================================================================================
 *
 *       Filename:  fig15_20.cpp
 *
 *    Description:  Fig. 15.20: Demonstrating stream manipulators boolalpha and
 *                  noboolalpha.
 *
 *        Version:  1.0
 *        Created:  03/10/16 17:08:56
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int main(int argc, const char *argv[]) {
    bool booleanValue = true;

    // display default true booleanValue
    std::cout << "booleanValue is " << booleanValue << std::endl;

    // display booleanValue after using boolalpha
    std::cout << "booleanValue (after using boolalpha) is " << std::boolalpha
              << booleanValue << std::endl
              << std::endl;

    std::cout << "switch booleanValue and use noboolalpha" << std::endl;
    booleanValue = false;
    std::cout << std::noboolalpha << std::endl;

    // display default false booleanValue after using noboolalpha
    std::cout << "booleanValue is " << booleanValue << std::endl;

    // display booleanValue after using boolalpha again
    std::cout << "booleanValue (after using boolalpha) is " << std::boolalpha
              << booleanValue << std::endl;

    return 0;
}
