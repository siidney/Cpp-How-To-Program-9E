/*
 * =====================================================================================
 *
 *       Filename:  ex_633.cpp
 *
 *    Description:  Exercise 6.33 - Coin Tossing
 *
 *        Version:  1.0
 *        Created:  15/04/16 13:50:17
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <random>

int flip(void);

const int NUM_FLIPS = 100;

std::random_device rd;
std::mt19937 gen(rd());

// simulates the flipping of a coin and returns the results
inline int flip() { return std::uniform_int_distribution<int>{0, 1}(gen); }

int main(int argc, const char *argv[]) {
    int heads = 0;
    int tails = 0;

    std::cout << "Program to simulate coin tossing" << std::endl;

    for (int i = 1; i <= NUM_FLIPS; ++i) {
        std::cout << i << ": ";

        if (flip() == 1) {
            std::cout << "heads" << std::endl;
            heads++;
        } else {
            std::cout << "tails" << std::endl;
            tails++;
        }
    }

    std::cout << "\nHeads: " << heads << "\nTails:" << tails << std::endl;
    return 0;
}
