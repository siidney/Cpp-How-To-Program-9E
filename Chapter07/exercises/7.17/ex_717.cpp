/*
 * =====================================================================================
 *
 *       Filename:  ex_717.cpp
 *
 *    Description:  Exercise 7.17 - Dice Rolling
 *
 *        Version:  1.0
 *        Created:  22/04/16 14:19:55
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <cstdlib>
#include <iomanip>
#include <iostream>

int rollDie();

static int totalRolls = 36000;
static int total = 13;

int main(int argc, const char *argv[]) {
    int tally[total] = {};

    srand(time(0));

    std::cout << "Program to print the totals of 2 dice rolls 36000 times\n"
              << std::endl;

    for (int i = 0; i < totalRolls; ++i) {
        ++tally[rollDie() + rollDie()];
    }

    for (int i = 2; i < total; ++i) {
        std::cout << std::setw(2) << i << ": " << tally[i] << std::endl;
    }

    return 0;
}
// roll a single die
int rollDie() { return rand() % 6 + 1; }
