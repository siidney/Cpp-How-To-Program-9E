/*
 * =====================================================================================
 *
 *       Filename:  ex_218.cpp
 *
 *    Description:  Exercise 2.18 - Comparing integers
 *                  Write a program that asks the user to enter two integers,
 *                  obtains the numbers from the user, then prints the larger
 *                  number followed by the words "is larger."
 *                  If the numbers are equal print the message "These numbers
 *                  are equal"
 *
 *        Version:  1.0
 *        Created:  11/03/16 04:28:06
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

int main(int argc, const char *argv[]){
    int num1, num2;

    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    if(num1 == num2)
        std::cout << "These numbers are equal" << std::endl;
    else
        std::cout << MAX(num1, num2) << " is Larger." << std::endl;
    return 0;
}
