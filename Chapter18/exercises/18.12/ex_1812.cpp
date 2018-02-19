/*
 * =====================================================================================
 *
 *       Filename:  ex_1812.cpp
 *
 *    Description:  Exercise 18.12 - Printing a String Backwards
 *
 *        Version:  1.0
 *        Created:  14/02/17 11:17:46
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
    std::cout << "Enter a string to have it reversed: ";
    std::string input;

    std::getline(std::cin, input);

    std::string::reverse_iterator it = input.rbegin();

    while (it != input.rend()) {
        int ascii = *(it++);

        if ((ascii >= 97) && (ascii <= 122)) {
            ascii = (ascii - 32);
        } else if ((ascii >= 65) && (ascii <= 90)) {
            ascii = (ascii + 32);
        }

        char c = ascii;

        std::cout << c;
    }

    std::cout << std::endl;
    return 0;
}
