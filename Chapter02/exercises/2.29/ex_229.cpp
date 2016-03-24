/*
 * =====================================================================================
 *
 *       Filename:  ex_229.cpp
 *
 *    Description:  Exercise 2.29 - Table
 *                  Using the techniques of this chapter, write a program that
 *                  calculates the squares and cubes of the integers from 0 to
 *                  10.
 *                  Use tabs to print...
 *
 *        Version:  1.0
 *        Created:  11/03/16 04:59:04
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
    std::cout << "integer square  cube"<< std::endl;
    std::cout << "0\t0\t0"<< std::endl;
    std::cout << "1\t"  << 1*1   << "\t" << 1*1*1 << std::endl;
    std::cout << "2\t"  << 2*2   << "\t" << 2*2*2 << std::endl;
    std::cout << "3\t"  << 3*3   << "\t" << 3*3*3 << std::endl;
    std::cout << "4\t"  << 4*4   << "\t" << 4*4*4 << std::endl;
    std::cout << "5\t"  << 5*5   << "\t" << 5*5*5 << std::endl;
    std::cout << "6\t"  << 6*6   << "\t" << 6*6*6 << std::endl;
    std::cout << "7\t"  << 7*7   << "\t" << 7*7*7 << std::endl;
    std::cout << "8\t"  << 8*8   << "\t" << 8*8*8 << std::endl;
    std::cout << "9\t"  << 9*9   << "\t" << 9*9*9 << std::endl;
    std::cout << "10\t" << 10*10 << "\t" << 10*10*10 << std::endl;

    return 0;
}
