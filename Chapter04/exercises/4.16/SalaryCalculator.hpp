/*
 * =====================================================================================
 *
 *       Filename:  SalaryCalculator.hpp
 *
 *    Description:  Exercise 4.16 - Salary Calculator
 *
 *        Version:  1.0
 *        Created:  27/03/16 01:34:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <iostream>

class SalaryCalculator {
 private:
    const double BASE_HOURS = 40.0f;

    double hoursWorked = 0.0f;
    double hourlyRate = 0.0f;

 public:
    SalaryCalculator();
    ~SalaryCalculator();

    // SETTERS
    void setHoursWorked(double);
    void setHourlyRate(double);

    // GETTERS
    double getHoursWorked() const;
    double getHourlyRate() const;
    double getSalary() const;

    void run();
};
