/*
 * =====================================================================================
 *
 *       Filename:  exercise_228.cpp
 *
 *    Description:  Exercise 2.28 - Digits of an Integer.
 *                  Write a program that inputs a five-digit integer, separates
 *                  the integer into its digits and prints them separated by
 *                  three spaces each.
 *
 *        Version:  1.0
 *        Created:  11/03/16 04:42:11
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int main(int argc, const char *argv[]){

    int num, n1, n2, n3, n4, n5;

    std::cout << "Enter a five digit integer: ";
    std::cin >> num;

    n5 = num % 10;
    num /= 10;
    n4 = num % 10;
    num /= 10;
    n3 = num % 10;
    num /= 10;
    n2 = num % 10;
    num /= 10;
    n1 = num % 10;
    num /= 10;

    std::cout << n1 << "   " << n2 << "   " << n3 << "   " << n4 << "   " << n5 << std::endl;

    return 0;
}
