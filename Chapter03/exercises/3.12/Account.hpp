/*
 * =====================================================================================
 *
 *       Filename:  Account.hpp
 *
 *    Description:  Exercise 3.12 - Account Class
 *
 *        Version:  1.0
 *        Created:  21/03/16 00:11:29
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
 private:
    int accountBalance;

 public:
    explicit Account(int);

    // GETTERS
    int getBalance();

    void credit(int);  // credit account
    void debit(int);   // debit account
};
