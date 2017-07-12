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

int main(int argc, const char *argv[]) {
    int counter = 0;
    int sum = 0;

    std::cout
        << "Enter a list of space separated integers for average calculation"
        << "9999 ends input: " << std::endl;
    std::cin >> sum;

    // set i as input to ensure exit condition
    // increment counter as opposed i
    for (int i = 0; i != 9999; counter++) {
        sum += i;
        std::cin >> i;
    }

    std::cout << "Average: " << sum / counter << std::endl;
    return 0;
}
