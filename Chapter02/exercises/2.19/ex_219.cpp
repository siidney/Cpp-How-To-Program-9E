/*
 * =====================================================================================
 *
 *       Filename:  ex_219.cpp
 *
 *    Description:  Exercise 2.19 - Arithmetic, Smallest and Largest
 *
 *        Version:  1.0
 *        Created:  11/03/16 03:31:34
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

inline int MIN(int a, int b) { return (a < b) ? a : b; }
inline int MAX(int a, int b) { return (a > b) ? a : b; }

int main(int argc, const char *argv[]) {
    int num1, num2, num3;

    std::cout << "Input three different integers: ";
    std::cin >> num1 >> num2 >> num3;

    std::cout << "Sum is " << num1 + num2 + num3 << std::endl;
    std::cout << "Average is " << (num1 + num2 + num3) / 3 << std::endl;
    std::cout << "Product is " << num1 * num2 * num3 << std::endl;
    std::cout << "Smallest is " << MIN(num1, MIN(num2, num3)) << std::endl;
    std::cout << "Largest is " << MAX(num1, MAX(num2, num3)) << std::endl;
    return 0;
}
