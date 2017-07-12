/*
 * =====================================================================================
 *
 *       Filename:  fig06_13.cpp
 *
 *    Description:  Fig. 6.13: Square function used to demonstrate the function
 *                  call stack and activation records.
 *
 *        Version:  1.0
 *        Created:  11/04/16 13:34:36
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int square(int);

int main(int argc, const char *argv[]) {
    int a = 10;  // value to square (local automatic variable in main)

    std::cout << a << " squared: " << square(a) << std::endl;
    return 0;
}
// returns the square of an integer
int square(int x) {  // x is a local variable
    return x * x;
}
