/*
 * =====================================================================================
 *
 *       Filename:  ex_1819.cpp
 *
 *    Description:  Exercise 18.19 - Erasing Character from a string
 *
 *        Version:  1.0
 *        Created:  20/02/17 12:06:03
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
    const std::string STR1 = "by";
    const std::string STR2 = "BY";

    std::cout << "Enter a string: ";

    std::string base;
    std::getline(std::cin, base);

    size_t pos = base.find(STR1, 0);

    while (pos != std::string::npos) {
        base.erase(pos, 2);
        pos = base.find(STR1, pos + 1);
    }

    pos = base.find(STR2, 0);

    while (pos != std::string::npos) {
        base.erase(pos, 2);
        pos = base.find(STR2, pos + 1);
    }

    std::cout << base << std::endl;

    return 0;
}
