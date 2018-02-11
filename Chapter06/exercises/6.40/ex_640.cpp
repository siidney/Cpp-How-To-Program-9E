/*
 * =====================================================================================
 *
 *       Filename:  ex_640.cpp
 *
 *    Description:  Exercise 6.40 - Visualising Recursion
 *
 *        Version:  1.1
 *        Created:  15/04/16 15:59:19
 *       Revision:  15/04/16 16:17:28
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iomanip>
#include <iostream>

unsigned long factorial(unsigned long);

int main(int argc, const char *argv[]) {
    // calculate factorials of 0 through 10
    for (int counter = 0; counter <= 10; ++counter) {
        printf("%d ! = %lu\n\n", counter, factorial(counter));
    }
    return 0;
}
// recursive definition of function factorial
unsigned long factorial(unsigned long number) {
    // base case
    if (number <= 1) {
        std::cout << number << std::endl;
        return 1;
    } else {
        std::cout << number << " * ";
        return number * factorial(number - 1);
    }
}
