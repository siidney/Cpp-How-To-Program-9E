/*
 * =====================================================================================
 *
 *       Filename:  fig18_11.cpp
 *
 *    Description:  Fig. 18.11 - Using an ostringstream object.
 *
 *        Version:  1.0
 *        Created:  09/02/17 17:33:51
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
    std::ostringstream outputString;

    std::string string1("Output of several data types ");
    std::string string2("to an ostringstream object:");
    std::string string3("\n        double: ");
    std::string string4("\n           int: ");
    std::string string5("\naddress of int: ");

    double double1 = 123.4567;
    int integer = 22;

    // output strings, double and int to ostringstream outputString
    outputString << string1 << string2 << string3 << double1 << string4
                 << integer << string5 << &integer;

    // call str to obtain string contents of the ostringstream
    std::cout << "outputString contains:\n" << outputString.str();

    // add additional characters and call str to output string
    outputString << "\nmore characters added";

    std::cout << "\n\nafter additional stream insertions,\n"
              << "outputString contains:\n"
              << outputString.str() << std::endl;

    return 0;
}
