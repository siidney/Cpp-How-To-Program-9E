/*
 * =====================================================================================
 *
 *       Filename:  ex_629.cpp
 *
 *    Description:  Exercise 6.29 - Prime Numbers
 *
 *        Version:  1.0
 *        Created:  14/04/16 19:12:21
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <math.h>
#include <iostream>

bool isPrime(int);

int main(int argc, const char *argv[]) {
    std::cout << "A program to print all prime numbers between 2 and 10k\n"
              << std::endl;

    for (int i = 2; i < 100; i++) {
        if (isPrime(i)) { std::cout << i << " "; }
    }
    std::cout << std::endl;

    return 0;
}
// determine whether n is prime
bool isPrime(int n) {
    if (n == 1 || n == 2) { return true; }

    // prime numbers cannot be even
    if (n % 2 == 0) { return false; }

    // upper limit sqrt as primes cannot be squared
    for (int i = 2; i < sqrt(n); ++i) {
        // has divisor not prime
        if (n % i == 0) { return false; }
    }
    return true;
}
