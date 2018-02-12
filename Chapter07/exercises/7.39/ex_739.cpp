/*
 * =====================================================================================
 *
 *       Filename:  ex_739.cpp
 *
 *    Description:  Exercise 7.39 - Dice Rolling with Vector
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
#include <iomanip>
#include <iostream>
#include <vector>
#include <random>

int rollDie();

static int totalRolls = 36000;
static size_t total = 13;

std::random_device rd;
std::mt19937 gen(rd());

int main(int argc, const char *argv[]) {
    std::vector<int> tally(total);

    std::cout << "Program to print the totals of 2 dice rolls 36000 times\n\n";

    for (int i = 0; i < totalRolls; ++i) {
        ++tally[rollDie() + rollDie()];
    }

    for (unsigned int i = 2; i < total; ++i) {
        std::cout << std::setw(2) << i << ": " << tally[i] << std::endl;
    }

    return 0;
}
// roll a single die
int rollDie() { return std::uniform_int_distribution<int>{1, 6}(gen); }
