/*
 * =====================================================================================
 *
 *       Filename:  fig06_23.cpp
 *
 *    Description:  Fig. 6.23: Using the unary scope resolution operator
 *
 *        Version:  1.0
 *        Created:  11/04/16 16:06:25
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int number = 7;  // global variable named number

int main(int argc, const char *argv[]) {
    double number = 10.0f;  // local variable named number

    std::cout << "Local double value of number = " << number
              << "\nGlobal int value of number = " << ::number << std::endl;
    return 0;
}
