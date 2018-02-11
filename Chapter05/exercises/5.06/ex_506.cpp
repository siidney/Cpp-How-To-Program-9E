/*
 * =====================================================================================
 *
 *       Filename:  ex_506.cpp
 *
 *    Description:  Exercise 5.06 - Averaging Integers
 *
 *        Version:  1.0
 *        Created:  04/04/16 17:28:45
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

inline int AVERAGE(int a, int b) { return (a / b); };

static const int EXIT = 9999;

int main(int argc, const char *argv[]) {
    int counter = 0;
    int sum = 0;

    std::cout
        << "Enter a list of space separated integers for average calculation. "
        << EXIT << " ends input\n> ";
    std::cin >> sum;

    // set i as input to ensure exit condition
    // increment counter as opposed i
    for (int i = 0; i != EXIT; counter++) {
        sum += i;
        std::cin >> i;
    }

    std::cout << "Average: " << AVERAGE(sum, counter) << std::endl;
    return 0;
}
