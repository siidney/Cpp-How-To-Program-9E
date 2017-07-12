/*
 * =====================================================================================
 *
 *       Filename:  ex_429.cpp
 *
 *    Description:  Exercise 4.29 - Multiples of 2 with an Infinite Loop
 *
 *        Version:  1.0
 *        Created:  27/03/16 18:07:17
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
    int num = 2;

    while (true) {
        std::cout << num << std::endl;
        num *= 2;
    }

    return 0;
}
