/*
 * =====================================================================================
 *
 *       Filename:  fig05_01.cpp
 *
 *    Description:  Fig. 5.1: Counter-controlled repetition.
 *
 *        Version:  1.0
 *        Created:  04/04/16 16:41:00
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
    int counter = 1;

    while (counter <= 10) {
        std::cout << counter << " ";
        ++counter;
    }
    std::cout << std::endl;
    return 0;
}
