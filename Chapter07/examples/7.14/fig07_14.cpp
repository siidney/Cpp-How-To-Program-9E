/*
 * =====================================================================================
 *
 *       Filename:  fig07_14.cpp
 *
 *    Description:  Fig. 7.14: Demonstrating the const qualifier.
 *
 *        Version:  1.0
 *        Created:  19/04/16 13:46:28
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

void tryToModifyArray(const int[]);

int main(int argc, const char *argv[]) {
    int a[] = {10, 20, 30};

    tryToModifyArray(a);

    std::cout << a[0] << ' ' << a[1] << ' ' << a[2] << std::endl;

    return 0;
}
// In function tryToModifyArray, "b" cannot be used to modify the original array
// "a" in main
void tryToModifyArray(const int b[]) {
    b[0] /= 2;  // compilation error
}
