/*
 * =====================================================================================
 *
 *       Filename:  Employee.hpp
 *
 *    Description:  Fig. 13.9: Employee abstract base class.
 *
 *        Version:  1.0
 *        Created:  12/08/16 19:16:10
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
#include <stdexcept>
#include <string>

#include "Date.hpp"

class Employee {
 public:
    Employee(const std::string&, const std::string&, const std::string&, Date);

    void setFirstName(const std::string&);
    std::string getFirstName() const;

    void setLastName(const std::string&);
    std::string getLastName() const;

    void setSocialSecurityNumber(const std::string&);
    std::string getSocialSecurityNumber() const;

    void setBirthDate(int, int, int);
    Date getBirthDate() const;

    // pure virtual function makes Employee an abstract base class
    virtual double earnings() const = 0;  // pure virtual
    virtual void print() const;           // virtual

 private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;

    Date birthDate;
};
