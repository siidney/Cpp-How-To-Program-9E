/*
 * =============================================================================
 *
 *       Filename:  ex_2118.cpp
 *
 *    Description:  Exercise 21.18 - Converting Strings to Floating-Point Numbers
 *
 *        Version:  1.0
 *        Created:  13/03/18 12:47:44
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
    double total = 0;

    char dStr[255];

    std::cout << "Enter 4 space separated doubles: ";
    std::cin.getline(dStr, 255);

    char* tokenPtr = strtok(dStr, " ");

    while (tokenPtr != nullptr) {
        total += atof(tokenPtr);
        tokenPtr = strtok(nullptr, " ");
    }

    std::cout << "total = " << total << std::endl;



    return 0;
}  // end method main
