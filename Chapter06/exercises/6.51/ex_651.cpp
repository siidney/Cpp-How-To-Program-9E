/*
 * =====================================================================================
 *
 *       Filename:  ex_651.cpp
 *
 *    Description:  Exercise 6.51 - Pass-by-Value vs. Pass-by-Reference
 *
 *        Version:  1.0
 *        Created:  16/04/16 14:49:52
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int tripleByValue(int);
int tripleByReference(int&);

int main(int argc, const char* argv[]) {
    std::cout
        << "Program to demonstrate passing parameters by reference and value"
        << std::endl;

    int count = 3;

    std::cout << "tripleByValue = " << tripleByValue(count) << std::endl;
    std::cout << "tripleByReference = " << tripleByReference(count)
              << std::endl;

    return 0;
}
// triples and returns n by value
int tripleByValue(int n) { return n * n * n; }
// triples and returns n by reference
int tripleByReference(const int& n) { return n * n * n; }
