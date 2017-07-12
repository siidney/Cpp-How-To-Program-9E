/*
 * =====================================================================================
 *
 *       Filename:  fig02_13.cpp
 *
 *    Description:  Fig. 2.13: Comparing integers using if statements,
 *                  relational operators and equality operators.
 *
 *        Version:  1.0
 *        Created:  10/03/16 23:40:21
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int main(int argc, const char *argv[]) {
    int number1;
    int number2;

    std::cout << "Enter two integers to compare: ";  // prompt user for data
    std::cin >> number1 >> number2;  // read two integers from user

    if (number1 == number2)
        std::cout << number1 << " == " << number2 << std::endl;

    if (number1 != number2)
        std::cout << number1 << " != " << number2 << std::endl;

    if (number1 < number2)
        std::cout << number1 << " < " << number2 << std::endl;

    if (number1 > number2)
        std::cout << number1 << " > " << number2 << std::endl;

    if (number1 <= number2)
        std::cout << number1 << " <= " << number2 << std::endl;

    if (number1 >= number2)
        std::cout << number1 << " >= " << number2 << std::endl;

    return 0;
}
