/*
 * =====================================================================================
 *
 *       Filename:  ex_1630.cpp
 *
 *    Description:  Exercise 16.30 - Uncaught Exceptions
 *
 *        Version:  1.0
 *        Created:  27/10/16 18:40:07
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

void function() {
    try {
        if (false) {
            throw 9;  // caught in function
        } else {
            throw 10.5;  // caught in main
        }
    } catch (int e) {
        std::cout << "Caught in Function: i: " << e << std::endl;
    }
}

int main(int argc, const char *argv[]) {
    try {
        function();
    } catch (double &e) {
        std::cout << "Caught in main: d: " << e << std::endl;
    } catch (...) {
        std::cout << "test" << std::endl;
    }
    return 0;
}
