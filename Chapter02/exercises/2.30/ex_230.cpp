/*
 * =====================================================================================
 *
 *       Filename:  ex_230.cpp
 *
 *    Description:  Exercise 2.30 - Body Mass Index Calculator
 *
 *        Version:  1.0
 *        Created:  11/03/16 05:09:38
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iomanip>
#include <iostream>

#define BMI(w, h) ((w * 703) / (h * h))

// function declarations
void print_BMI_info();

int main(int argc, const char *argv[]) {
    double weight, height;

    std::cout << "Enter you weight in pounds: ";
    std::cin >> weight;

    std::cout << "Enter your height in inches: ";
    std::cin >> height;

    std::cout << std::setprecision(2) << std::fixed
              << "\nBMI: " << BMI(weight, height) << std::endl;

    print_BMI_info();

    return 0;
}
void print_BMI_info() {
    std::cout << "\nBMI VALUES" << std::endl;
    std::cout << "Underweight: less than 18.5" << std::endl;
    std::cout << "Normal:      between 18.5 and 24.9" << std::endl;
    std::cout << "Overweight:  between 25 and 29.9" << std::endl;
    std::cout << "Obese:       30 or greater\n" << std::endl;
}
