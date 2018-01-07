/*
 * =====================================================================================
 *
 *       Filename:  ex_1627.cpp
 *
 *    Description:  Exercise 16.27 - Order of Exception Handlers
 *
 *        Version:  1.0
 *        Created:  27/10/16 18:17:52
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
        throw std::exception();
    } catch (std::exception &e) {
        std::cout << "Executed as first: " << e.what() << std::endl;
    } catch (std::exception &e) {
        std::cout << "Executed IF first" << e.what() << std::endl;
    }

    return 0;
}
