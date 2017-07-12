/*
 * =====================================================================================
 *
 *       Filename:  ex_505.cpp
 *
 *    Description:  Exercise 5.05 - Summing Integers
 *
 *        Version:  1.0
 *        Created:  04/04/16 17:13:33
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
    int limit, num, total = 0;

    std::cout << "Enter number of values to be summed followed by values: ";
    std::cin >> limit;

    for (int i = 1; i <= limit; i++) {
        std::cin >> num;
        total += num;
    }

    std::cout << "Total = " << total << std::endl;
    return 0;
}
