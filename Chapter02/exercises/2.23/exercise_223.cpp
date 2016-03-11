/*
 * =====================================================================================
 *
 *       Filename:  exercise_223.cpp
 *
 *    Description:  Exercise 2.23 - Largest and Smallest Integers
 *                  Write a program that reads in five integers and determines
 *                  and prints the largest and smallest integers in the group.
 *
 *        Version:  1.0
 *        Created:  11/03/16 03:59:38
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#define MAX(a, b) ((a > b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)

int main(int argc, const char *argv[]){
    int num1, num2, num3, num4, num5;

    std::cout << "Enter five integers: ";
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

    std::cout << "Max: " << MAX(num1, MAX(num2, MAX(num3, MAX(num4, num5)))) << std::endl;
    std::cout << "Min: " << MIN(num1, MIN(num2, MIN(num3, MIN(num4, num5)))) << std::endl;

    return 0;
}
