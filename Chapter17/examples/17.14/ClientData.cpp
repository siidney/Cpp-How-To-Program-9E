/*
 * =====================================================================================
 *
 *       Filename:  ClientData.cpp
 *
 *    Description:  Fig 17.10 - Class ClientData stores customer's credit
 *                  information.
 *
 *        Version:  1.0
 *        Created:  21/12/16 18:41:59
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "ClientData.hpp"
#include <string>

// default ClientData constructor
ClientData::ClientData(int accountNumberValue, std::string lastNameValue,
                       std::string firstNameValue, double balanceValue) {
    setAccountNumber(accountNumberValue);
    setLastName(lastNameValue);
    setFirstName(firstNameValue);
    setBalance(balanceValue);
}
// get account-number value
int ClientData::getAccountNumber() const { return accountNumber; }
// set account-number value
void ClientData::setAccountNumber(int accountNumberValue) {
    accountNumber = accountNumberValue;
}
// get last-name value
std::string ClientData::getLastName() const { return lastName; }
// set last-name value
void ClientData::setLastName(std::string lastNameString) {
    // copy at most 15 characters from string to lastName
    int length = lastNameString.size();
    length = (length < 15 ? length : 14);
    lastNameString.copy(lastName, length);
    lastName[length] = '\0';
}
// get first-name value
std::string ClientData::getFirstName() const { return firstName; }
// set first-name value
void ClientData::setFirstName(std::string firstNameString) {
    int length = firstNameString.size();
    length = (length < 10 ? length : 9);
    firstNameString.copy(firstName, length);
    firstName[length] = '\0';
}
// get balance value
double ClientData::getBalance() const { return balance; }
// set balance value
void ClientData::setBalance(double balanceValue) { balance = balanceValue; }
