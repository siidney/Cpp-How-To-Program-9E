/*
 * =====================================================================================
 *
 *       Filename:  ex_217.cpp
 *
 *    Description:  Exercise 2.17 - Printing
 *                  Write a program that prints the numbers 1 to 4 on the same
 *                  line with each pair of adjacent numbers separated by one
 *                  space. Do this several ways:
 *                  a) Using one statement with one stream insertion operator.
 *                  b) Using one statement with four stream insertion operators.
 *                  c) Using four statements.
 *
 *        Version:  1.0
 *        Created:  11/03/16 03:22:46
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
    std::cout << "1 2 3 4" << std::endl;
    std::cout << "1 "
              << "2 "
              << "3 "
              << "4 " << std::endl;
    std::cout << "1 ";
    std::cout << "2 ";
    std::cout << "3 ";
    std::cout << "4 " << std::endl;

    return 0;
}
