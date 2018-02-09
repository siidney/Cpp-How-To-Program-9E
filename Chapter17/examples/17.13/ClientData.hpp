/*
 * =====================================================================================
 *
 *       Filename:  ClientData.h
 *
 *    Description:  Fig. 17.9 - Class ClientData definition
 *
 *        Version:  1.0
 *        Created:  21/12/16 18:38:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <string>

class ClientData {
 public:
    // default ClientData constructor
    ClientData(int = 0, std::string = "", std::string = "", double = 0.0f);

    // accessor functions for accountNumber
    void setAccountNumber(int);
    int getAccountNumber() const;

    // accesssor functions for lastName
    void setLastName(std::string);
    std::string getLastName() const;

    // accessor functions for firstName
    void setFirstName(std::string);
    std::string getFirstName() const;

    // accessor functions for balance
    void setBalance(double);
    double getBalance() const;

 private:
    int accountNumber;
    char lastName[15];
    char firstName[10];
    double balance;
};
