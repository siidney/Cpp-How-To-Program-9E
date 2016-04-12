/*
 * =====================================================================================
 *
 *       Filename:  ex_616.cpp
 *
 *    Description:  Exercise 6.16 - Random Numbers
 *
 *        Version:  1.0
 *        Created:  11/04/16 23:31:49
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, const char *argv[]){
    srand(time(NULL));

    std::cout << "Program to assign random integers to variables in the following ranges" << std::endl;

    std::cout << "1 <= n <= 2: " << 1 + rand() % 2
              << "\n1 <= n <= 100: " << 1 + rand() % 100
              << "\n0 <= n <= 9: " << rand() % 10
              << "\n1000 <= n <= 1112: " << rand() % (1112 - 1000) + 1000
              << "\n-1 <= n <= 1: " << rand() % 3 + -1
              << "\n-3 <= n <= 11: " << rand() % 15 + -3 << std::endl;
    return 0;
}
