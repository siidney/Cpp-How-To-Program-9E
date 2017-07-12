/*
 * =====================================================================================
 *
 *       Filename:  ex_1821.cpp
 *
 *    Description:  Exercise 18.21 - Reversing a string with Iterators
 *
 *        Version:  1.0
 *        Created:  20/02/17 17:13:29
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

void printReverse(std::string&);

int main(int argc, const char* argv[]) {
    std::cout << "Enter a string: ";

    std::string base;
    std::getline(std::cin, base);

    printReverse(base);

    return 0;
}
// prints a given string in reverse using iterators
void printReverse(std::string& base) {
    std::string::reverse_iterator rit = base.rbegin();

    while (rit != base.rend()) {
        std::cout << *(rit++);
    }
    std::cout << std::endl;
}
