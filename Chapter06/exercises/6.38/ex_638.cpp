/*
 * =====================================================================================
 *
 *       Filename:  ex_638.cpp
 *
 *    Description:  Exercise 6.38 - Towers of Hanoi
 *                  NOTE: Neither know nor care if this is correct. So don't
 *                  rely on this for anything important.
 *
 *        Version:  1.0
 *        Created:  15/04/16 15:35:18
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

void hanoi(int, int, int, int);

int main(int argc, const char *argv[]) {
    std::cout << "Program to recursively solve towers of hanoi" << std::endl;

    hanoi(4, 1, 3, 2);

    return 0;
}
// recursive towers of hanoi implementation
void hanoi(int numDisks, int sourcePeg, int destPeg, int tempPeg) {
    if (numDisks > 0) {
        hanoi((numDisks - 1), sourcePeg, tempPeg, destPeg);

        std::cout << "From " << sourcePeg << " to " << destPeg << std::endl;

        hanoi((numDisks - 1), tempPeg, destPeg, sourcePeg);
    }
}
