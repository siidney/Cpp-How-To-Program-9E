/*
 * =====================================================================================
 *
 *       Filename:  Account.cpp
 *
 *    Description:  Exercise 3.12 - Account Class
 *
 *        Version:  1.0
 *        Created:  21/03/16 00:15:16
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#include "Account.hpp"

// constructor
Account::Account(int balance) {
    if (balance >= 0) {
        accountBalance = balance;
    } else {
        std::cout << "Error: Unable to initialise balance. Invalid entry." << std::endl;
    }
}
// GETTERS
int Account::getBalance() { return accountBalance; }

// Increase current balance by amount
void Account::credit(int amount) {
    if (amount > 0) { accountBalance += amount; }
}

// Decrease current balance by amount
void Account::debit(int amount) {
    if (amount <= accountBalance) { accountBalance -= amount; }
}
