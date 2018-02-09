/*
 * =====================================================================================
 *
 *       Filename:  SalesCommissionCalculator.hpp
 *
 *    Description:  Exercise 4.15 - Sales Commission Calculator
 *
 *        Version:  1.0
 *        Created:  27/03/16 01:13:12
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

class SalesCommissionCalculator {
 private:
    const double COMMISSION = 0.09f;
    const double BASEPAY = 200.0f;

    double weeklySales = 0.0f;
    double weeklyEarnings = 0.0f;

 public:
    SalesCommissionCalculator();
    ~SalesCommissionCalculator();

    // SETTERS
    void setWeeklySales(double);
    void setWeeklyEarnings();

    // GETTERS
    double getWeeklySales() const;
    double getWeeklyEarnings() const;

    void run();
};
