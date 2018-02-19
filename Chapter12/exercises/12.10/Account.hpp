/*
 * =====================================================================================
 *
 *       Filename:  Account.hpp
 *
 *    Description:  Exercise 12.10 - Account Inheritance Hierarchy
 *
 *        Version:  1.0
 *        Created:  24/07/16 20:26:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

class Account {
 public:
    explicit Account(double);

    void credit(double);
    bool debit(double);
    double getBalance() const { return balance; }

 private:
    double balance;
};
