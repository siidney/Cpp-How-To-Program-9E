/*
 * =====================================================================================
 *
 *       Filename:  fig18_04.cpp
 *
 *    Description:  Fig. 18.04 - Using the swap function to swap two strings
 *
 *        Version:  1.0
 *        Created:  09/02/17 16:23:42
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
    std::string first("one");
    std::string second("two");

    // output strings
    std::cout << "Before swap:\n first: " << first << "\nsecond: " << second;

    first.swap(second);

    std::cout << "\n\nAfter swap:\n first: " << first << "\nsecond: " << second
              << std::endl;

    return 0;
}
