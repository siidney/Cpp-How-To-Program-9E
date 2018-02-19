/*
 * =====================================================================================
 *
 *       Filename:  SavingsAccount.hpp
 *
 *    Description:  Exercise 10.7 - SavingsAccount Class
 *
 *        Version:  1.0
 *        Created:  02/07/16 17:03:13
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

class SavingsAccount {
 public:
    explicit SavingsAccount(double, double = 0.0f);

    void calculateMonthlyInterest();

    static void modifyInterestRate(double);
    static double getInterestRate();

    friend std::ostream& operator<<(std::ostream& out, SavingsAccount acc) {
        return acc.printBalance(out);
    }

    std::ostream& printBalance(std::ostream&) const;

 private:
    static double annualInterestRate;
    double savingsBalance;
};
