/*
 * =====================================================================================
 *
 *       Filename:  ex_737.cpp
 *
 *    Description:  Exercise 7.37 - Find the Minimum Value in an Array
 *
 *        Version:  1.0
 *        Created:  26/04/16 14:33:30
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <ctime>
#include <iostream>

int recursiveMinimum(const int[], int, int);

static const int LIMIT = 10;

int main(int argc, const char *argv[]) {
    std::cout << "Program to recursively find mimimum value in an array\n"
              << std::endl;

    int n[LIMIT];

    srand(time(0));

    for (int i = 0; i < LIMIT; ++i) {
        n[i] = rand() % LIMIT + 1;

        std::cout << n[i] << std::endl;
    }

    std::cout << "\nMinimum : " << recursiveMinimum(n, 0, LIMIT - 1)
              << std::endl;

    return 0;
}
// Returns the minimum value from an array recursively
int recursiveMinimum(const int n[], int start, int end) {
    static int minimum = n[start];

    if (start == end)
        return minimum;

    if (minimum < n[start + 1]) {
        return recursiveMinimum(n, ++start, end);
    }

    minimum = n[start + 1];
    return recursiveMinimum(n, ++start, end);
}
