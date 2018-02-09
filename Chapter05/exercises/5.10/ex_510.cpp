/*
 * =====================================================================================
 *
 *       Filename:  ex_510.cpp
 *
 *    Description:  Exercise 5.10 - Factorials.
 *
 *        Version:  1.1
 *        Created:  04/04/16 18:11:57
 *       Revision:  09/02/18 03:21:28
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int factorial(int);
int factorialr(int);

int main(int argc, const char *argv[]) {
    std::cout << "Factorials of 1 to 5\n" << std::endl;

    for (int i = 1; i <= 5; i++) {
        printf("%d\t%d\n", i, factorial(i));
    }
    std::cout << "\nRecursively: " << std::endl;
    for (int i = 1; i <= 5; i++) {
        printf("%d\t%d\n", i, factorialr(i));
    }
    return 0;
}

// n! = n * (n-1) * (n-2) * (n-3) * ... * 1
int factorial(int n) {
    int f = 1;

    for (int i = 1; i <= n; i++) {
        f *= i;
    }

    return f;
}
/*
 * n! = n * (n-1) * (n-2) * (n-3) * ... *
 */
int factorialr(int n) {
    if (n >= 1) {
        return n * factorialr(n -1);
    } else {
        return 1;
    }
}
