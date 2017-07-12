/*
 * =====================================================================================
 *
 *       Filename:  fig05_05.cpp
 *
 *    Description:  Fig. 5.05: Summing integers with the for statement
 *
 *        Version:  1.0
 *        Created:  04/04/16 16:43:16
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
    int total = 0;

    for (int number = 2; number <= 20; number += 2) {
        total += number;
    }

    std::cout << "Sum is " << total << std::endl;
    return 0;
}
