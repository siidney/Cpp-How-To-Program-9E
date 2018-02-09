/*
 * =====================================================================================
 *
 *       Filename:  fig05_13.cpp
 *
 *    Description:  Fig. 5.13: Break statement exiting a for statement
 *
 *        Version:  1.0
 *        Created:  04/04/16 17:07:27
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
    int count;

    for (count = 1; count <= 10; ++count) {
        if (count == 5) { break; }

        std::cout << count << " ";
    }

    std::cout << "\nBroke out of loop at count = " << count << std::endl;
    return 0;
}
