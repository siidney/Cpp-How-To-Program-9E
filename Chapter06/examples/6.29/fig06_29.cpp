/*
 * =====================================================================================
 *
 *       Filename:  fig06_29.cpp
 *
 *    Description:  Fig. 6.29: Demonstrating the recursive function factorial
 *
 *        Version:  1.0
 *        Created:  11/04/16 17:36:47
 *       Revision:  none
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
        std::cout << std::setw(2) << counter << "! = " << factorial(counter)
                  << std::endl;
    }
    return 0;
}
// recursive definition of function factorial
unsigned long factorial(unsigned long number) {
    // base case
    if (number <= 1) {
        return 1;
    } else {
        return number * factorial(number - 1);
    }
}
