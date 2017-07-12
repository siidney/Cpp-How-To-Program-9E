/*
 * =====================================================================================
 *
 *       Filename:  fig05_07.cpp
 *
 *    Description:  Fig. 5.7: do...while repetition statement
 *
 *        Version:  1.0
 *        Created:  04/04/16 16:48:50
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

    do {
        std::cout << counter << " ";
        ++counter;
    } while (counter <= 10);

    std::cout << std::endl;
    return 0;
}
