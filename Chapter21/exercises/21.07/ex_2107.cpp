/*
 * =============================================================================
 *
 *       Filename:  ex_2107.cpp
 *
 *    Description:  Exercise 21.07 - Multiplication Via Bit Shifting
 *
 *        Version:  1.0
 *        Created:  27/02/18 12:46:03
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <bitset>

/**
 * Calculates power using bit shifting
 * @param int
 * @param int
 */
int power2(int n, int pow) {
    return n * (pow << 1);
}  // end method power2

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    int i = 16;

    std::cout << "int i = " << i << "\nbit i = " << std::bitset<8>(i);
    int r = power2(i, 2);

    std::cout << "\npower2(i, 2) = " << r
              << "\npower2(i, 2) = " << std::bitset<8>(r) << std::endl;

    return 0;
}  // end method main
