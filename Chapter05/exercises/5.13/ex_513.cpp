/*
 * =====================================================================================
 *
 *       Filename:  ex_513.cpp
 *
 *    Description:  Exercise 5.13 - Bar Chart
 *
 *        Version:  1.0
 *        Created:  05/04/16 16:37:46
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

void printLine(int);

int main(int argc, const char *argv[]) {
    int counter = 5;
    int value = 0;

    std::cout << "Program to print bar chart of entered values.\n" << std::endl;

    while (counter > 0) {
        printf("Enter an integer value 1-30 (%d remaining): ", counter);
        std::cin >> value;

        if (value >= 1 && value <= 30) {
            printLine(value);

            counter--;
        } else {
            std::cout << "Incorrect value entered." << std::endl;
        }
    }
    return 0;
}
void printLine(int value) {
    for (int i = 0; i < value; i++) {
        std::cout << "*";
    }
    std::cout << std::endl;
}
