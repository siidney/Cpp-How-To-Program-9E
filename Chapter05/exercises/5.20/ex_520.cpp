/*
 * =====================================================================================
 *
 *       Filename:  ex_520.cpp
 *
 *    Description:  Exercise 5.20 - Pythagorean Triples
 *
 *        Version:  1.0
 *        Created:  07/04/16 17:39:49
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
#include <algorithm>

bool isRightTriangle(int, int, int);

int main(int argc, const char *argv[]) {
    std::cout << "All Pythagorean Triples up to sides of 500" << std::endl;

    // inner loops start at 1+ previous loop to avoid duplication
    for (int i = 1; i <= 500; i++) {
        for (int j = i + 1; j <= 500; j++) {
            for (int k = j + 1; k <= 500; k++) {
                if (isRightTriangle(i, j, k)) {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }

    return 0;
}
bool isRightTriangle(int a, int b, int c) {
    // get hypotenuse (always the longest side)
    int hypotenuse = std::max(a, std::max(b, c));

    if (hypotenuse == a) {
        return pow(b, 2) + pow(c, 2) == pow(hypotenuse, 2);
    } else if (hypotenuse == b) {
        return pow(a, 2) + pow(c, 2) == pow(hypotenuse, 2);
    } else {
        return pow(a, 2) + pow(b, 2) == pow(hypotenuse, 2);
    }
}
