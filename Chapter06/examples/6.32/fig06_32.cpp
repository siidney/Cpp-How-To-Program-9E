/*
 * =====================================================================================
 *
 *       Filename:  fig06_32.cpp
 *
 *    Description:  Fig. 6.32: Testing the iterative factorial function
 *
 *        Version:  1.0
 *        Created:  11/04/16 18:05:01
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
    for (int counter = 0; counter <= 10; ++counter) {
        std::cout << std::setw(2) << counter << "! = " << factorial(counter)
                  << std::endl;
    }

    return 0;
}
// iterative function factorial
unsigned long factorial(unsigned long number) {
    unsigned long result = 1;

    // iterative factorial calculation
    for (unsigned long i = number; i >= 1; --i) {
        result *= i;
    }

    return result;
}
