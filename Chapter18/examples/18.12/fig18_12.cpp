/*
 * =====================================================================================
 *
 *       Filename:  fig18_12.cpp
 *
 *    Description:  Fig. 18.12 - Demonstrating input from an istringstream
 *                  object
 *
 *        Version:  1.0
 *        Created:  09/02/17 17:44:01
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, const char* argv[]) {
    std::string input("Input test 123 4.7 A");
    std::istringstream inputString(input);
    std::string string1;
    std::string string2;
    int integer;
    double double1;
    char character;

    inputString >> string1 >> string2 >> integer >> double1 >> character;

    std::cout << "The following items were extracted\n"
              << "from the istringstream object:"
              << "\nstring: " << string1 << "\nstring: " << string2
              << "\n     int: " << integer << "\ndouble: " << double1
              << "\n    char: " << character;

    // attempt to read from empty stream
    long value;
    inputString >> value;

    // test stream results
    if (inputString.good())
        std::cout << "\n\nlong value is: " << value << std::endl;
    else
        std::cout << "\n\ninputString is empty" << std::endl;

    return 0;
}
