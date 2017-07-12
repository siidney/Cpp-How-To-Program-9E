/*
 * =====================================================================================
 *
 *       Filename:  fig18_10.cpp
 *
 *    Description:  Fig. 18.10 - Using an iterator to output a string.
 *
 *        Version:  1.0
 *        Created:  09/02/17 17:28:36
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
    std::string string1("Testing iterators");
    std::string::const_iterator iterator1 = string1.begin();

    std::cout << "string1 = " << string1
              << "\n(using iterator iterator1) string1 is: ";

    // iterate through string
    while (iterator1 != string1.end()) {
        std::cout << *iterator1;  // dereference iterator to get char
        ++iterator1;              // advance iterator to next char
    }

    std::cout << std::endl;

    return 0;
}
