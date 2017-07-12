/*
 * =====================================================================================
 *
 *       Filename:  ex_1808.cpp
 *
 *    Description:  Exercise 18.08 - Using string Iterators
 *
 *        Version:  1.0
 *        Created:  10/02/17 16:23:07
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

int main(int argc, const char* argv[]) {
    std::string str = "now step live...";

    std::string::reverse_iterator rit = str.rbegin();

    while (rit != str.rend()) {
        std::cout << *(rit++);
    }
    std::cout << std::endl;

    return 0;
}
