/*
 * =====================================================================================
 *
 *       Filename:  ex_1822.cpp
 *
 *    Description:  Exercise 18.22 - Reversing a string with Iterators using
 *                  Recursion
 *
 *        Version:  1.0
 *        Created:  20/02/17 17:16:21
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
    std::cout << std::endl;

    return 0;
}
// Recursively prints a given string in reverse using iterators
void printReverse(std::string& base) {
    static std::string::reverse_iterator rit = base.rbegin();

    if (rit == base.rend()) { return; }

    std::cout << *(rit++);

    printReverse(base);
}
