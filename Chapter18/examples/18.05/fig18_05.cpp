/*
 * =====================================================================================
 *
 *       Filename:  fig18_05.cpp
 *
 *    Description:  Fig. 18.05 - Demonstrating member function related to size
 *                  and capacity.
 *
 *        Version:  1.0
 *        Created:  09/02/17 16:26:54
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

void printStatistics(const std::string&);

int main(int argc, const char* argv[]) {
    std::string string1;

    std::cout << "Statistics before input:\n" << std::boolalpha;
    printStatistics(string1);

    // read in only "tomato" from "tomato soup"
    std::cout << "\n\nEnter a string: ";
    std::cin >> string1;
    std::cout << "The string entered was: " << string1;

    std::cout << "\nStatistics after input:\n";
    printStatistics(string1);

    // read in "soup"
    std::cin >> string1;
    std::cout << "\n\nThe remaining string is: " << string1 << std::endl;
    printStatistics(string1);

    // append 46 characters to string1
    string1 += "1234567890abcdefghijklmnopqrstuvwxyz1234567890";
    std::cout << "\n\nstring1 is not: " << string1 << std::endl;
    printStatistics(string1);

    // add 10 elements to string1
    string1.resize(string1.length() + 10);
    std::cout << "\n\nStats after resizing by (length + 10)\n";
    printStatistics(string1);
    std::cout << std::endl;

    return 0;
}
// display string statistics
void printStatistics(const std::string& stringRef) {
    std::cout << "capacity: " << stringRef.capacity()
              << "\nmax size: " << stringRef.max_size()
              << "\nsize: " << stringRef.size()
              << "\nlength: " << stringRef.length()
              << "\nempty: " << stringRef.empty();
}
