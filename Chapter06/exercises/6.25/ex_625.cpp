/*
 * =====================================================================================
 *
 *       Filename:  ex_625.cpp
 *
 *    Description:  Exercise 6.25 - Calculating Number of Seconds
 *
 *        Version:  1.0
 *        Created:  14/04/16 17:36:59
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

long numSeconds(int, int, int);

int main(int argc, const char *argv[]) {
    int h1, m1, s1;
    int h2, m2, s2;

    std::cout << "Program to print number of elapsed seconds between n and n\n"
              << std::endl;

    std::cout << "Enter hours minutes seconds (start time): ";
    std::cin >> h1 >> m1 >> s1;

    std::cout << "Enter hours minutes seconds (finish time): ";
    std::cin >> h2 >> m2 >> s2;

    std::cout << "Difference: "
              << (numSeconds(h2, m2, s2) - numSeconds(h1, m1, s1))
              << " seconds." << std::endl;

    return 0;
}
// returns the number of elapsed seconds since 12 and the given time
long numSeconds(int h, int m, int s) {
    // if 24h convert to 12h
    if (h > 12) {
        h -= 12;
    }

    // hours > minutes > seconds + minutes > seconds + seconds
    return ((h * 60) * 60) + (m * 60) + s;
}
