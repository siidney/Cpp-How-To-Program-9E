/*
 * =============================================================================
 *
 *       Filename:  ex_2117.cpp
 *
 *    Description:  Exercise 21.17 - Converting Strings to Integers
 *
 *        Version:  1.0
 *        Created:  13/03/18 11:49:10
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstring>

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    int total = 0;

    char intStr[255];

    std::cout << "Enter 4 space separated integers: ";
    std::cin.getline(intStr, 255);

    char* tokenPtr = strtok(intStr, " ");

    while (tokenPtr != nullptr) {
        total += atoi(tokenPtr);
        tokenPtr = strtok(nullptr, " ");
    }

    std::cout << "total = " << total << std::endl;

    return 0;
}  // end method main
