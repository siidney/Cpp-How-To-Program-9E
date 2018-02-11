/*
 * =====================================================================================
 *
 *       Filename:  ex_632.cpp
 *
 *    Description:  Exercise 6.32 - Quality Points For Numeric Grades
 *
 *        Version:  1.1
 *        Created:  15/04/16 13:45:03
 *       Revision:  11/02/18 03:54:47
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int qualityPoints(int);

int main(int argc, const char *argv[]) {
    int average = 0;

    std::cout << "Input student average: ";
    std::cin >> average;

    std::cout << "Quality Point: " << qualityPoints(average) << std::endl;

    return 0;
}
// returns int representation of a students average
int qualityPoints(int average) {
    if (average >= 90) {
        return 4;
    } else if (average >= 80) {
        return 3;
    } else if (average >= 70) {
        return 2;
    } else if (average >= 60) {
        return 1;
    } else {
        return 0;
    }
}
