/*
 * =====================================================================================
 *
 *       Filename:  CheckingAccount.cpp
 *
 *    Description:  Exercise 12.10 - Account Inheritance Hierarchy
 *
 *        Version:  1.0
 *        Created:  24/07/16 20:28:05
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#include "CheckingAccount.hpp"

CheckingAccount::CheckingAccount(double b, double fpt)
    : Account(b), feePerTransaction(fpt) {}
// credit
void CheckingAccount::credit(double c) {
    Account::credit(c + feePerTransaction);
}
// debit
void CheckingAccount::debit(double d) {
    if (Account::debit(d)) {
        Account::debit(feePerTransaction);
    } else {
        std::cout << "Error insufficient funds in checking account";
    }
}
