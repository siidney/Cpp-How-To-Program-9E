/*
 * =====================================================================================
 *
 *       Filename:  fig15_19.cpp
 *
 *    Description:  Fig. 15.19: Stream manipulator uppercase
 *
 *        Version:  1.0
 *        Created:  03/10/16 17:04:47
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
    std::cout << "Printing uppercase letters in scientific" << std::endl
              << "notation exponents and hexadecimal values:" << std::endl;

    // use std::uppercase to display uppercase letters; use std::hex and
    // std::showbase to display hexadecimal value and its base
    std::cout << std::uppercase << 4.345e10 << std::endl
              << std::hex << std::showbase << 123456789 << std::endl;

    return 0;
}
