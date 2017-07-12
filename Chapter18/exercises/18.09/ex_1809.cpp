/*
 * =====================================================================================
 *
 *       Filename:  ex_1809.cpp
 *
 *    Description:  Exercise 18.90 - Words Ending in "r" or "ay"
 *
 *        Version:  1.0
 *        Created:  10/02/17 16:37:40
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

bool validate(const std::string&);

int main(int argc, const char* argv[]) {
    std::string string1 = "Not a correct string";
    std::string string2 = "I am a worker";
    std::string string3 = "What is the date today";
    std::string string4 = "This one won't print";

    std::cout << (validate(string1) ? string1 + "\n" : "");
    std::cout << (validate(string2) ? string2 + "\n" : "");
    std::cout << (validate(string3) ? string3 + "\n" : "");
    std::cout << (validate(string4) ? string4 + "\n" : "");

    return 0;
}
// tests whether given string ends in "r" or "ay"
bool validate(const std::string& base) {
    return ((base.substr(base.length() - 2) == "ay") ||
            (base.substr(base.length() - 1) == "r"));
}
