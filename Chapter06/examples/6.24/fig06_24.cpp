/*
 * =====================================================================================
 *
 *       Filename:  fig06_24.cpp
 *
 *    Description:  Fig. 6.24: Overloaded functions
 *
 *        Version:  1.0
 *        Created:  11/04/16 16:11:35
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int square(int x) {
    std::cout << "square of integer " << x << " is ";
    return x * x;
}
double square(double y) {
    std::cout << "square of double " << y << " is ";
    return y * y;
}
int main(int argc, const char *argv[]) {
    std::cout << square(7);
    std::cout << std::endl;

    std::cout << square(7.5);
    std::cout << std::endl;
    return 0;
}
