/*
 * =====================================================================================
 *
 *       Filename:  ex_622.cpp
 *
 *    Description:  Exercise 6.22 - Square of Asterisks
 *
 *        Version:  1.0
 *        Created:  14/04/16 16:48:16
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

void displaySquare(int);

int main(int argc, const char *argv[]) {
    int side;

    std::cout << "Program to display a square of asterisks of size n\n"
              << std::endl;

    std::cout << "Enter side: ";
    std::cin >> side;

    displaySquare(side);
    return 0;
}
// displays a square of asterisks of size n
void displaySquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
