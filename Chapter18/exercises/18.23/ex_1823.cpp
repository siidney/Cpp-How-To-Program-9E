/*
 * =====================================================================================
 *
 *       Filename:  ex_1823.cpp
 *
 *    Description:  Exercise 18.23 - Using the erase Function with Iterator
 *                  Arguments
 *                  NOTE: Lifted straight from
 * http://www.cplusplus.com/reference/string/string/erase/
 *
 *        Version:  1.0
 *        Created:  20/02/17 17:25:25
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
    std::string str("This is an sentence");

    str.erase(str.begin() + 9);
    std::cout << str << std::endl;

    str.erase(str.begin() + 5, str.end() - 9);
    std::cout << str << std::endl;

    return 0;
}
