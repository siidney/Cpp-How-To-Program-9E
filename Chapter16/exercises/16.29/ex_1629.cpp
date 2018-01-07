/*
 * =====================================================================================
 *
 *       Filename:  ex_1629.cpp
 *
 *    Description:  Exercise 16.29 - Rethrowing Exceptions
 *
 *        Version:  1.0
 *        Created:  27/10/16 18:33:16
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <exception>

int main(int argc, const char *argv[]) {
    try {
        try {
            throw std::exception();
        } catch (std::exception) {
            std::cout << "Original throw caught" << std::endl;
            throw;
        }
    } catch (std::exception) {
        std::cout << "Rethrow caught" << std::endl;
    }

    return 0;
}
