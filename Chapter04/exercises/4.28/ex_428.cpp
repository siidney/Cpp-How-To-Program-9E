/*
 * =====================================================================================
 *
 *       Filename:  ex_428.cpp
 *
 *    Description:  Exercise 4.28 - Checkerboard Patter of Asterisks
 *
 *        Version:  1.0
 *        Created:  27/03/16 03:37:35
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
    for (int i = 1; i <= 8; i++) {
        if (i % 2 == 0) {
            std::cout << ' ';
        }
        for (int j = 0; j < 8; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    return 0;
}
