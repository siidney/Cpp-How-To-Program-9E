/*
 * =====================================================================================
 *
 *       Filename:  SalaryCalculator.cpp
 *
 *    Description:  Exercise 4.16 - Salary Calculator
 *
 *        Version:  1.0
 *        Created:  27/03/16 01:37:57
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "SalaryCalculator.hpp"

SalaryCalculator::SalaryCalculator() {}
SalaryCalculator::~SalaryCalculator() {}

// SETTERS
void SalaryCalculator::setHoursWorked(double hw) {
    hoursWorked = (hw > 0.0f) ? hw : -1;
}
void SalaryCalculator::setHourlyRate(double rate) { hourlyRate = rate; }
// GETTERS
double SalaryCalculator::getHoursWorked() const { return hoursWorked; }
double SalaryCalculator::getHourlyRate() const { return hourlyRate; }
double SalaryCalculator::getSalary() const {
    if (getHoursWorked() > BASE_HOURS) {
        double overtime = getHoursWorked() - BASE_HOURS;
        double overtimePay = getHourlyRate() + (getHourlyRate() * 0.5);

        return (BASE_HOURS * getHourlyRate()) + (overtime * overtimePay);
    } else {
        return getHoursWorked() * getHourlyRate();
    }
}

void SalaryCalculator::run() {
    double dtmp = 0.0f;

    std::cout << "Enter hours worked (-1 to end): ";
    std::cin >> dtmp;
    setHoursWorked(dtmp);

    if (dtmp != -1) {
        std::cout << "Enter hourly rate of the employee ($00.00): ";
        std::cin >> dtmp;
        setHourlyRate(dtmp);

        std::cout << "Salary is: " << getSalary() << std::endl;
    }
}
