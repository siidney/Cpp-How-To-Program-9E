/*
 * =====================================================================================
 *
 *       Filename:  ex_432.cpp
 *
 *    Description:  Exercise 4.32 - Sides of a Triangle
 *
 *        Version:  1.0
 *        Created:  27/03/16 19:02:10
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <iostream>

bool isTriangle(int, int, int);

int main(int argc, const char *argv[]) {
    int a, b, c = 0;

    std::cout << "Program to determine if 3 values make a triangle."
              << std::endl;

    std::cout << "Enter 3 space separated nonzero integers: ";
    std::cin >> a >> b >> c;

    printf("%d %d %d could%srepresent a triangle\n", a, b, c,
           (isTriangle(a, b, c) ? " " : " not "));

    return 0;
}
bool isTriangle(int a, int b, int c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) { return true; }

    return false;
}
