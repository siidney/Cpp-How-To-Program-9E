/*
 * =====================================================================================
 *
 *       Filename:  fig18_03.cpp
 *
 *    Description:  Fig. 18.3 - Demonstrating string member function substr
 *
 *        Version:  1.0
 *        Created:  09/02/17 16:21:38
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
    std::string string1("The airplane landed on time.");

    // retrieve substring "plane" which begins at
    // subscript 7 and consists of 5 characters
    std::cout << string1.substr(7, 5) << std::endl;

    return 0;
}
