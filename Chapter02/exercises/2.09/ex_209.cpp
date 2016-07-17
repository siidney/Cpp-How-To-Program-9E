/*
 * =====================================================================================
 *
 *       Filename:  ex_209.cpp
 *
 *    Description:  Exercise 2.9
 *                  Write a single C++ statement or line that accomplishes each
 *                  of the following:
 *                  a) Print the message "Enter two numbers".
 *                  b) Assign the product of variables b and c to variable a.
 *                  c) State that a program performs a payroll calculation.
 *                  d) Input three integer values from the keyboard into integer
 *                  variables a, b and c.
 *
 *        Version:  1.0
 *        Created:  10/03/16 23:52:15
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int main(int argc, const char *argv[]){
    int a, b, c;

    std::cout << "Enter two numbers ";
    std::cin >> b >> c;

    a = b * c;

    std::cout << "This program performs a payroll calculation" << std::endl;
    std::cout << "Enter three integer values ";

    std::cin >> a >> b >> c;

    return 0;
}
