/*
 * =====================================================================================
 *
 *       Filename:  Employee.cpp
 *
 *    Description:  Exercise 18.27 - Enhanced Employee Class
 *                  Note: No definitions are given for pure virtual functions.
 *
 *        Version:  1.0
 *        Created:  12/08/16 19:23:10
 *       Revision:  28/02/17 14:17:15
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

#include "Employee.hpp"

Employee::Employee(const std::string& first, const std::string& last,
                   const std::string& ssn, Date dob)
    : firstName(first),
      lastName(last),
      socialSecurityNumber(ssn),
      birthDate(dob) {}
// set first name
void Employee::setFirstName(const std::string& first) { firstName = first; }
// get first name
std::string Employee::getFirstName() const { return firstName; }
// set last name
void Employee::setLastName(const std::string& last) { lastName = last; }
// get last name
std::string Employee::getLastName() const { return lastName; }
// set social security number
void Employee::setSocialSecurityNumber(const std::string& ssn) {
    socialSecurityNumber = ssn;  // should validate
}
// get social security number
std::string Employee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}
// set birthDate
void Employee::setBirthDate(int m, int d, int y) { birthDate = Date(m, d, y); }
// get birthDate
Date Employee::getBirthDate() const { return birthDate; }
// Print Employee's information (virtual, but not pure virtual)
void Employee::print() const {
    std::cout << getFirstName() << ' ' << getLastName()
              << "\nDate of birth: " << birthDate
              << "\nsocial security number: " << getSocialSecurityNumber();
}
// utility functions
bool Employee::isValidSocialSecurityNumber(const std::string& base) const {
    for (size_t i = 0; i < base.size(); ++i) {
        if (i == 3 || i == 6) { continue; }

        if (!isdigit(base[i])) { return false; }
    }

    return true;
}
