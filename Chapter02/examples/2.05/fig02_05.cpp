/*
 * =====================================================================================
 *
 *       Filename:  fig02_05.cpp
 *
 *    Description:  Fig. 2.5: Addition program that displays the sum of two
 *                  integers.
 *
 *        Version:  1.0
 *        Created:  10/03/16 19:11:45
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
    // variable declarations
    int number1;  // first integer to add
    int number2;  // second integer to add
    int sum;      // sum of number1 and number2

    std::cout << "Enter first integer: ";  // prompt user for data
    std::cin >> number1;  // read the first integer from user into number1

    std::cout << "Enter second integer: ";  // prompt user for data
    std::cin >> number2;  // read the second integer from user into number2

    sum = number1 + number2;

    std::cout << "Sum is " << sum << std::endl;

    return 0;
}
