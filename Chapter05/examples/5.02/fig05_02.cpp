/*
 * =====================================================================================
 *
 *       Filename:  fig05_02.cpp
 *
 *    Description:  Fig. 5.2: Counter-controlled repetition with the for
 *                  statement.
 *
 *        Version:  1.0
 *        Created:  04/04/16 16:42:15
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
    for (int counter = 1; counter <= 10; ++counter) {
        std::cout << counter << " ";
    }
    std::cout << std::endl;
    return 0;
}
