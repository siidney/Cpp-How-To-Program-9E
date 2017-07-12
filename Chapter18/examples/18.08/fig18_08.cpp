/*
 * =====================================================================================
 *
 *       Filename:  fig18_08.cpp
 *
 *    Description:  Fig. 18.08 - Demonstrating class string insert member
 *                  functions.
 *
 *        Version:  1.0
 *        Created:  09/02/17 17:11:09
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
    std::string string1("beginning end");
    std::string string2("middle");
    std::string string3("12345678");
    std::string string4("xx");

    std::cout << "Initial strings:\nstring1: " << string1
              << "\nstring2: " << string2 << "\nstring3: " << string3
              << "\nstring4: " << string4 << "\n\n";

    // insert "middle" at location 10 in string1
    string1.insert(10, string2);

    // insert "xx" at location 3 in string3
    string3.insert(3, string4, 0, std::string::npos);

    std::cout << "Strings after insert:\nstring1: " << string1
              << "\nstring2: " << string2 << "\nstring3: " << string3
              << "\nstring4: " << string4 << "\n\n";

    return 0;
}
