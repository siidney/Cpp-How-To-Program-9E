/*
 * =====================================================================================
 *
 *       Filename:  fig18_01.cpp
 *
 *    Description:  Fig. 18.1 - Demonstration string assignment and
 *                  concatenation.
 *
 *        Version:  1.0
 *        Created:  09/02/17 14:43:59
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
    std::string string1("cat");
    std::string string2;
    std::string string3;

    string2 = string1;        // assign string1 to string2
    string3.assign(string1);  // assign string1 to string3

    std::cout << "string1: " << string1 << "\nstring2: " << string2
              << "\nstring3: " << string3 << "\n\n";

    // modify string2 and string3
    string2[0] = string3[2] = 'r';

    std::cout << "After modification of string2 and string3:\n"
              << "string1: " << string1 << "\nstring2: " << string2
              << "\nstring3: ";

    // demonstrating member function at
    for (unsigned int i = 0; i < string3.length(); ++i)
        std::cout << string3.at(i);

    // declare string4 and string5
    std::string string4(string1 + "apult");  // concatenation
    std::string string5;

    // overloaded +=
    string3 += "pet";         // create "carpet"
    string1.append("acomb");  // create "catacomb"

    // append subscript locations 4 through end of string1 to
    // create string "comb" (string5 was initially empty)
    string5.append(string1, 4, string1.length() - 4);

    std::cout << "\nAfter concatenation:\nstring1: " << string1
              << "\nstring2: " << string2 << "\nstring3: " << string3
              << "\nstring4: " << string4 << "\nstring5: " << string5
              << std::endl;

    return 0;
}
