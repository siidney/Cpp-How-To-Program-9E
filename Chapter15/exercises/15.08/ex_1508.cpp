/*
 * =====================================================================================
 *
 *       Filename:  ex_1508.cpp
 *
 *    Description:  Exercise 15.08 - Printing Pointer Values as Integers
 *                  NOTE: No idea if this is correct as the question was overly
 *                  ambiguous. There was no mention as to which pointer values
 *                  should be used so here it is...
 *
 *        Version:  1.0
 *        Created:  12/10/16 17:48:21
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
    char c = 'X';
    char *cp = &c;

    std::cout << static_cast<int>(*cp) << "\n"
              << static_cast<unsigned int>(*cp) << "\n"
              << static_cast<short int>(*cp) << "\n"
              << static_cast<unsigned short int>(*cp) << "\n"
              << static_cast<signed short int>(*cp) << "\n"
              << static_cast<long int>(*cp) << "\n"
              << static_cast<signed long int>(*cp) << "\n"
              << static_cast<unsigned long int>(*cp) << std::endl;

    return 0;
}
