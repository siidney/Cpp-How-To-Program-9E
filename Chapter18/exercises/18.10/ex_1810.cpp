/*
 * =====================================================================================
 *
 *       Filename:  ex_1810.cpp
 *
 *    Description:  Exercise 18.10 - string Concatenation
 *
 *        Version:  1.0
 *        Created:  10/02/17 16:47:17
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

std::string getInput(const std::string&);

int main(int argc, const char* argv[]) {
    std::string fName = getInput("Enter first name");
    std::string lName = getInput("Enter last name");

    std::cout << "Concatenation using += : ";
    std::string string1 = fName;
    string1 += " " + lName;

    std::cout << string1 << std::endl;

    std::cout << "Concatenation using constructor : ";
    std::string string2(fName + " " + lName);

    std::cout << string2 << std::endl;

    return 0;
}
// gets input from user
std::string getInput(const std::string& prompt) {
    std::string input;

    std::cout << prompt << ": ";
    std::cin >> input;

    return input;
}
