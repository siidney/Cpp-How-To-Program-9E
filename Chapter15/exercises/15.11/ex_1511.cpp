/*
 * =====================================================================================
 *
 *       Filename:  ex_15.11.cpp
 *
 *    Description:  Exercise 15.11 - Length of a String
 *
 *        Version:  1.0
 *        Created:  13/10/16 17:50:53
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iomanip>
#include <iostream>
#include <string>

int main(int argc, const char *argv[]) {
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    int i;
    for (i = 0; input[i] != '\0'; ++i) {}

    std::cout << "Length of string: " << input << " = " << i << std::endl;

    return 0;
}
