/*
 * =====================================================================================
 *
 *       Filename:  Employee.h
 *
 *    Description:  Fig. 10.10: Employee Class definition showing composition
 *
 *        Version:  1.0
 *        Created:  18/06/16 00:42:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include "Date.hpp"

#include <string>

class Employee {
 public:
    Employee(const std::string&, const std::string&, const Date&, const Date&);
    ~Employee();

    void print() const;

 private:
    std::string firstName;
    std::string lastName;
    const Date birthDate;
    const Date hireDate;
};
