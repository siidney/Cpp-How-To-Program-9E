/*
 * =====================================================================================
 *
 *       Filename:  ex_523.cpp
 *
 *    Description:  Exercise 5.23 - Diamond of Asterisks
 *
 *        Version:  1.0
 *        Created:  07/04/16 19:41:13
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int main(int argc, const char *argv[]) {
    // i = rows, j = diamonds, k = spaces
    for (int i = 1, j = 1, k = 4; i <= 9; i++) {
        for (int s = 0; s < k; s++) {
            std::cout << " ";
        }
        for (int d = 0; d < j; d++) {
            std::cout << "*";
        }

        (i >= 5) ? j -= 2 : j += 2;
        (i >= 5) ? k++ : k--;

        std::cout << std::endl;
    }
    return 0;
}
