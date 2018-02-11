/*
 * =====================================================================================
 *
 *       Filename:  ex_616.cpp
 *
 *    Description:  Exercise 6.16 - Random Numbers
 *
 *        Version:  1.1
 *        Created:  11/04/16 23:31:49
 *       Revision:  11/02/18 03:14:31
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <random>

std::random_device rd;
std::mt19937 gen(rd());

int getRandomNumber(const int&, const int&);

int main(int argc, const char *argv[]) {
    std::cout << "Program to assign random integers to variables in the "
                 "following ranges"
              << std::endl;

    std::cout << "1 <= n <= 2: " << getRandomNumber(1, 2)
              << "\n1 <= n <= 100: " << getRandomNumber(1, 100)
              << "\n0 <= n <= 9: " << getRandomNumber(0, 9)
              << "\n1000 <= n <= 1112: " << getRandomNumber(1000, 1112)
              << "\n-1 <= n <= 1: " << getRandomNumber(-1, 1)
              << "\n-3 <= n <= 11: " << getRandomNumber(-3, 11) << std::endl;
    return 0;
}

/**
 * Creates a random distribution and returns a value in the range min max.
 * @param int
 * @param int
 * @return int
 */
int getRandomNumber(const int& min, const int& max) {
    return std::uniform_int_distribution<int>{min, max}(gen);
}  // end method getRandomNumber
