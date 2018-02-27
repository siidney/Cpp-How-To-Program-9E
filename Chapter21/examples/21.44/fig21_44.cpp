/*
 * =============================================================================
 *
 *       Filename:  fig21_44.cpp
 *
 *    Description:  Fig. 21.44: Using memcmp
 *
 *        Version:  1.0
 *        Created:  27/02/18 11:59:28
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <iomanip>
#include <cstring>  // memcmp prototype

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char s1[] = "ABCDEFG";
    char s2[] = "ABCDXYG";

    std::cout << "s1 = " << s1 << "\ns2 = " << s2 << std::endl
              << "\nmemcmp(s1, s2, 4) = " << std::setw(3) << memcmp(s1, s2, 4)
              << "\nmemcmp(s1, s2, 7) = " << std::setw(3) << memcmp(s1, s2, 7)
              << "\nmemcmp(s2, s1, 7) = " << std::setw(3) << memcmp(s2, s1, 7)
              << std::endl;

    return 0;
}  // end method main
