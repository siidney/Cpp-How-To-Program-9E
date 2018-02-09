/*
 * =====================================================================================
 *
 *       Filename:  ex_317.cpp
 *
 *    Description:  Exercise 3.17 - Computerisation of Health Records
 *
 *        Version:  1.0
 *        Created:  24/03/16 03:27:24
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

#include "HealthProfile.hpp"

int main(int argc, const char *argv[]) {
    std::string fName, lName, gender;
    int month, day, year;
    double weight, height;

    std::cout << "Enter your first and last name: ";
    std::cin >> fName >> lName;
    std::cout << "Enter your gender (Male/Female): ";
    std::cin >> gender;
    std::cout << "Enter your date of birth (mm dd yyyy): ";
    std::cin >> month >> day >> year;
    std::cout << "Enter your weight in pounds: ";
    std::cin >> weight;
    std::cout << "Enter your height in inches: ";
    std::cin >> height;

    HealthProfile hp(fName, lName, gender, month, day, year, height, weight);
    hp.showHealthProfile();

    return 0;
}
