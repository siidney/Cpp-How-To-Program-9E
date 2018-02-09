/*
 * =====================================================================================
 *
 *       Filename:  ex_229.cpp
 *
 *    Description:  Exercise 2.29 - Table
 *
 *        Version:  1.0
 *        Created:  11/03/16 04:59:04
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
    std::cout << "integer square  cube" << std::endl;

    for (int i = 0; i <= 10; ++i) {
        std::cout << i << "\t" << (i * i) << "\t" << (i * i * i) << std::endl;
    }

    return 0;
}
