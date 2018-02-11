/*
 * =====================================================================================
 *
 *       Filename:  fig06_30.cpp
 *
 *    Description:  Fig. 6.30: Testing the recursive fibonacci function.
 *
 *        Version:  1.0
 *        Created:  11/04/16 17:57:34
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

unsigned long fibonacci(unsigned long);

int main(int argc, const char *argv[]) {
    // calculate fibonacci values of 0 through 10
    for (int counter = 0; counter <= 10; ++counter) {
        std::cout << "fibonacci(" << counter << ") = " << fibonacci(counter)
                  << std::endl;
    }

    // display higher fibonacci values
    std::cout << "fibonacci(20) = " << fibonacci(20) << std::endl;
    std::cout << "fibonacci(30) = " << fibonacci(30) << std::endl;
    std::cout << "fibonacci(35) = " << fibonacci(35) << std::endl;

    return 0;
}
// recursive function fibonacci
unsigned long fibonacci(unsigned long number) {
    // base cases
    if ((number == 0) || (number == 1)) {
        return number;
    } else {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}
