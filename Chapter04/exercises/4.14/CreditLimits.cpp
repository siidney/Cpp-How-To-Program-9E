/*
 * =====================================================================================
 *
 *       Filename:  CreditLimits.cpp
 *
 *    Description:  Exercise 4.14 - Credit Limits
 *
 *        Version:  1.0
 *        Created:  27/03/16 00:50:25
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */

#include "CreditLimits.h"

CreditLimits::CreditLimits() {}
CreditLimits::~CreditLimits() {}

// SETTERS
void CreditLimits::setAccountNumber(int accNo) { accountNumber = accNo; }
void CreditLimits::setBeginningBalance(double startBalance) {
    beginningBalance = startBalance;
}
void CreditLimits::setNewBalance() {
    newBalance = (getBeginningBalance() + getTotalMonthCharges()) -
                 getTotalMonthCredit();
}
void CreditLimits::setTotalMonthCharges(double totalCharges) {
    totalMonthCharges = totalCharges;
}
void CreditLimits::setTotalMonthCredit(double totalCredit) {
    totalMonthCredit = totalCredit;
}
void CreditLimits::setCreditLimit(double limit) { creditLimit = limit; }

// GETTERS
int CreditLimits::getAccountNumber() { return accountNumber; }
double CreditLimits::getBeginningBalance() { return beginningBalance; }
double CreditLimits::getNewBalance() { return newBalance; }
double CreditLimits::getTotalMonthCharges() { return totalMonthCharges; }
double CreditLimits::getTotalMonthCredit() { return totalMonthCredit; }
double CreditLimits::getCreditLimit() { return creditLimit; }
// determine if credit limit is exceeded
bool CreditLimits::isCreditLimitExceeded() {
    return (getCreditLimit() - getNewBalance() < 0) ? true : false;
}
// print account information
void CreditLimits::printInfo() {
    std::cout << "Account: " << getAccountNumber() << std::endl;
    std::cout << "Credit limit: " << getCreditLimit() << std::endl;
    std::cout << "Balance: " << getNewBalance() << std::endl;

    if (isCreditLimitExceeded()) {
        std::cout << "Credit Limit Exceeded." << std::endl;
    }
}
// gather account information
void CreditLimits::run() {
    int itmp;
    std::cout << "Enter account number (or -1 to quit): ";
    std::cin >> itmp;
    setAccountNumber(itmp);

    if (getAccountNumber() != -1) {
        double dtmp;

        std::cout << "Enter beginning balance: ";
        std::cin >> dtmp;
        setBeginningBalance(dtmp);

        std::cout << "Enter total charges: ";
        std::cin >> dtmp;
        setTotalMonthCharges(dtmp);

        std::cout << "Enter total credits: ";
        std::cin >> dtmp;
        setTotalMonthCredit(dtmp);

        std::cout << "Enter credit limit: ";
        std::cin >> dtmp;
        setCreditLimit(dtmp);

        setNewBalance();

        printInfo();
    }
}
