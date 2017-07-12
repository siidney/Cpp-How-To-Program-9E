/*
 * =====================================================================================
 *
 *       Filename:  ex_512.cpp
 *
 *    Description:  Exercise 5.12 - Drawing Patterns with Nested for Loops
 *
 *        Version:  1.0
 *        Created:  04/04/16 18:32:09
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

void printA();
void printB();
void printC();
void printD();
void printAll();

int main(int argc, const char *argv[]) {
    printA();
    printB();
    printC();
    printD();
    std::cout << std::endl;
    printAll();
    return 0;
}
void printA() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            std::cout << ((j <= i) ? '*' : ' ');
        }
        std::cout << std::endl;
    }
}
void printB() {
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= 10; j++) {
            std::cout << ((j <= i) ? '*' : ' ');
        }
        std::cout << std::endl;
    }
}
void printC() {
    for (int i = 10; i >= 1; i--) {
        for (int j = 10; j >= 1; j--) {
            std::cout << ((j <= i) ? '*' : ' ');
        }
        std::cout << std::endl;
    }
}
void printD() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 10; j >= 1; j--) {
            std::cout << ((j <= i) ? '*' : ' ');
        }
        std::cout << std::endl;
    }
}
// Extra credit side by side printing
void printAll() {
    // needs additional counter for B and C who rely on decrement counting
    for (int i = 1, j = 10; i <= 10; i++, j--) {
        // A
        for (int k = 1; k <= 10; k++) {
            std::cout << ((k <= i) ? '*' : ' ');
        }
        std::cout << "     ";
        // B
        for (int k = 1; k <= 10; k++) {
            std::cout << ((k <= j) ? '*' : ' ');
        }
        std::cout << "     ";
        // C
        for (int k = 10; k >= 1; k--) {
            std::cout << ((k <= j) ? '*' : ' ');
        }
        std::cout << "     ";
        // D
        for (int k = 10; k >= 1; k--) {
            std::cout << ((k <= i) ? '*' : ' ');
        }
        std::cout << std::endl;
    }
}
