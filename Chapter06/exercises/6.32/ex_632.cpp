/*
 * =====================================================================================
 *
 *       Filename:  ex_632.cpp
 *
 *    Description:  Exercise 6.32 - Quality Points For Numeric Grades
 *
 *        Version:  1.0
 *        Created:  15/04/16 13:45:03
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int qualityPoints(int);

int main(int argc, const char *argv[]){
    int average = 0;

    std::cout << "Input student average: ";
    std::cin >> average;

    std::cout << "Quality Point: " << qualityPoints(average) << std::endl;

    return 0;
}
// returns int representation of a students average
int qualityPoints(int average){
    if(average >= 90 && average <= 100)
        return 4;
    if(average >= 80 && average <= 89)
        return 3;
    if(average >= 70 && average <= 79)
        return 2;
    if(average >= 60 && average <= 69)
        return 1;

    return 0;
}
