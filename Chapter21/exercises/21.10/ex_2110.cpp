/*
 * =============================================================================
 *
 *       Filename:  ex_2110.cpp
 *
 *    Description:  Exercise 21.10 - Packing Characters into Unsigned Integers
 *
 *        Version:  1.0
 *        Created:  08/03/18 10:10:11
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
 * Packs four char values into a two-byte unsigned int.
 * @param char
 * @param char
 * @param char
 * @param char
 * @param unsigned int
 * @return unsigned int
 */
unsigned int packCharacters(char a, char b, char c, char d, unsigned int n) {
    return n = a | (b << 24) | (c << 16) | (d << 8);
}  // end method packCharacters

/**
 * Unpacks two char values from the given unsigned int.
 * @param unsigned int.
 */
void unpackCharacters(unsigned int n) {
    std::cout << static_cast<char>(n >> 0) << " "
              << static_cast<char>(n >> 8) << " "
              << static_cast<char>(n >> 16) << " "
              << static_cast<char>(n >> 24) << " "
              << std::endl;
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
    char c;
    char d;

    std::cout << "Enter 4 space separated chars: ";
    std::cin >> a >> b >> c >> d;

    std::cout << a << " " << b << " " << c << " " << d << std::endl;

    unsigned int packed = 0;

    std::cout << "packed before: " << std::bitset<8>(packed) << std::endl;
    packed = packCharacters(a, b, c, d, packed);

    std::cout << "packed after: " << std::bitset<8>(packed)
              << "\npacked value: " << packed
              << "\nunpacked values: ";

    unpackCharacters(packed);

    return 0;
}  // end method main
