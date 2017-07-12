/*
 * =====================================================================================
 *
 *       Filename:  ex_642.cpp
 *
 *    Description:  Exercise 6.42 - Recursive Main
 *
 *        Version:  1.0
 *        Created:  15/04/16 17:12:35
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int main() {
    static int count = 1;

    std::cout << count++ << std::endl;

    main();
    return 0;
}
