/*
 * =====================================================================================
 *
 *       Filename:  ex_1626.cpp
 *
 *    Description:  Exercise 16.26 - Catching All Exceptions
 *
 *        Version:  1.0
 *        Created:  27/10/16 18:12:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <stdexcept>

int main(int argc, const char *argv[]) {
    // uncomment to see that it Pokèmon's them all
    try {
        // throw std::exception();
        // throw std::invalid_argument("invalid argument");;
        throw std::out_of_range("out of range");
    } catch (...) {
        std::cout << "Exception Caught" << std::endl;
    }
    return 0;
}
