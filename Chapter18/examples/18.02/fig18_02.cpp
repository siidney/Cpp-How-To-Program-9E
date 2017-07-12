/*
 * =====================================================================================
 *
 *       Filename:  fig18_02.cpp
 *
 *    Description:  Fig. 18.02 - Demonstrating string comparison capabilities.
 *
 *        Version:  1.0
 *        Created:  09/02/17 16:04:47
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
    std::string string1("Testing the comparision functions.");
    std::string string2("Hello");
    std::string string3("stinger");
    std::string string4(string2);

    std::cout << "string1: " << string1 << "\nstring2: " << string2
              << "\nstring3: " << string3 << "\nstring4: " << string4 << "\n\n";

    // comparing string1 and string4
    if (string1 == string4)
        std::cout << "string1 == string4\n";
    else {
        if (string1 > string4)
            std::cout << "string1 > string4\n";
        else
            std::cout << "string1 < string4\n";
    }

    // comparing string1 and string2
    int result = string1.compare(string2);

    if (result == 0)
        std::cout << "string1.compare(string2) == 0\n";
    else {
        if (result > 0)
            std::cout << "string1.compare(string2) > 0\n";
        else
            std::cout << "string1.compare(string2) < 0\n";
    }

    // comparing string1 (elements 2-5) and string3 (elements 0-5)
    result = string1.compare(2, 5, string3, 0, 5);

    if (result == 0)
        std::cout << "string1.compare(2, 5, string3, 0, 5) == 0\n";
    else {
        if (result > 0)
            std::cout << "string1.compare(2, 5, string3, 0, 5) > 0\n";
        else
            std::cout << "string1.compare(2, 5, string3, 0, 5) < 0\n";
    }

    // comparing string2 and string4
    result = string4.compare(0, string2.length(), string2);

    if (result == 0)
        std::cout << "string4.compare(0, string2.length(), string2) == 0"
                  << std::endl;
    else {
        if (result > 0)
            std::cout << "string4.compare(0, string2.length(), string2) > 0"
                      << std::endl;
        else
            std::cout << "string4.compare(0, string2.length(), string2) < 0"
                      << std::endl;
    }

    // comparing string2 and string4
    result = string2.compare(0, 3, string4);

    if (result == 0)
        std::cout << "string2.compare(0, 3, string4) == 0" << std::endl;
    else {
        if (result > 0)
            std::cout << "string2.compare(0, 3, string4) > 0" << std::endl;
        else
            std::cout << "string2.compare(0, 3, string4) < 0" << std::endl;
    }

    return 0;
}
