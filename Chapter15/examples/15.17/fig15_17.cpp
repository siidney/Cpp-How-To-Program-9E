/*
 * =====================================================================================
 *
 *       Filename:  fig15_17.cpp
 *
 *    Description:  Fig. 15.17: Using steam manipulator showbase.
 *
 *        Version:  1.0
 *        Created:  03/10/16 16:28:45
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
    int x = 100;

    // use showbase to show number base
    std::cout << "Printing integers preceded by their base: " << std::endl
              << std::showbase;

    std::cout << x << std::endl;              // print decimal value
    std::cout << std::oct << x << std::endl;  // print octal value
    std::cout << std::hex << x << std::endl;  // print hexadecimal value

    return 0;
}
