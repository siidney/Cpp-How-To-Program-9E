/*
 * =============================================================================
 *
 *       Filename:  ex_2108.cpp
 *
 *    Description:  Exercise 21.8 - Packing Characters into Unsigned Integers.
 *
 *        Version:  1.0
 *        Created:  01/03/18 09:06:15
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
 * Packs two char values into a two-byte unsigned int.
 * @param char
 * @param char
 * @param unsigned int
 * @return unsigned int
 */
unsigned int packCharacters(char a, char b, unsigned int n) {
    return n = a | (b << 8);
}  // end method packCharacters

/**
 * Unpacks two char values from the given unsigned int.
 * @param unsigned int.
 */
void unpackCharacters(unsigned int n) {
    std::cout << static_cast<char>(n >> 0) << " " << static_cast<char>(n >> 8) << std::endl;
}  // end method unpackCharacters

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char a;
    char b;

    std::cout << "Enter 2 space separated chars: ";
    std::cin >> a >> b;

    std::cout << a << " " << b << std::endl;

    unsigned int packed = 0;

    std::cout << "packed before: " << std::bitset<8>(packed) << std::endl;
    packed = packCharacters(a, b, packed);

    std::cout << "packed after: " << std::bitset<8>(packed)
              << "\npacked value: " << packed
              << "\nunpacked values: ";

    unpackCharacters(packed);

    return 0;
}  // end method main
