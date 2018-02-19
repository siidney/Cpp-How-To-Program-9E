/*
 * =====================================================================================
 *
 *       Filename:  ex_1824.cpp
 *
 *    Description:  Exercise 18.24 - Letter Pyramid
 *
 *        Version:  1.0
 *        Created:  20/02/17 18:07:49
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

int main(int argc, const char* argv[]) {
    std::string base = "abcdefghijklmnopqrstuvwxyz";

    for (size_t i = 0, j = 1; i < 14; ++i, j += 2) {
        std::cout << std::string(14 - i, ' ');

        for (size_t k = 0, l = i; k < j; ++k) {
            std::cout << base[l];

            if (l == base.length()) { std::cout << '{'; }

            ((k >= i) ? --l : ++l);
        }
        std::cout << std::endl;
    }

    return 0;
}
