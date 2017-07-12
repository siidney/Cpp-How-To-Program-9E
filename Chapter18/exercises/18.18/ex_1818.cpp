/*
 * =====================================================================================
 *
 *       Filename:  ex_1818.cpp
 *
 *    Description:  Exercise 18.18 - String Insertion
 *
 *        Version:  1.0
 *        Created:  20/02/17 11:50:45
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
    std::cout << "Enter a string: ";

    std::string base;
    std::getline(std::cin, base);

    std::string insertStr = "******";

    base.insert((base.length() / 2), insertStr);

    std::cout << "\nNew String:\n" << base << std::endl;

    return 0;
}
