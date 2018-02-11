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

// triples and returns n by value
inline int tripleByValue(int n) { return n * n * n; }
// triples and returns n by reference
inline int tripleByReference(const int& n) { return n * n * n; }

int main(int argc, const char* argv[]) {
    std::cout << "Demonstrating passing parameters by reference and value\n";

    int count = 3;

    std::cout << "tripleByValue = " << tripleByValue(count) << std::endl;
    std::cout << "tripleByReference = " << tripleByReference(count) << std::endl;

    return 0;
}
