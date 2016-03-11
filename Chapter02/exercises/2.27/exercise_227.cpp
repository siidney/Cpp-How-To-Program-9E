/*
 * =====================================================================================
 *
 *       Filename:  exercise_227.cpp
 *
 *    Description:  Exercise 2.27 - Integer Equivalent of a Character
 *                  Write a program that prints the integer equivalent of a
 *                  character typed at the keyboard.
 *                  Store the input in a varable type of char.
 *
 *        Version:  1.0
 *        Created:  11/03/16 04:37:43
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
    char char1;

    std::cout << "Enter a character: ";
    std::cin >> char1;

    std::cout << "Integer equivalent of " << char1 << ": ";
    std::cout << static_cast<int>(char1) << std::endl;

    return 0;
}
