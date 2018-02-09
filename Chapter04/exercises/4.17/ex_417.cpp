/*
 * =====================================================================================
 *
 *       Filename:  ex_417.cpp
 *
 *    Description:  Exercise 4.17 - Find the Largest
 *
 *        Version:  1.0
 *        Created:  27/03/16 02:01:01
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#define MAX(a, b) ((a > b) ? a : b)

int main(int argc, const char *argv[]) {
    int counter = 0;
    int number = 0;
    int largest = 0;

    std::cout << "Program to find the largest of 10 numbers\n" << std::endl;

    while (counter < 10) {
        std::cout << "Enter number: (" << (10 - counter) << " remaining): ";
        std::cin >> number;

        largest = MAX(largest, number);

        counter++;
    }

    std::cout << "Largest Number is: " << largest << std::endl;
    return 0;
}
