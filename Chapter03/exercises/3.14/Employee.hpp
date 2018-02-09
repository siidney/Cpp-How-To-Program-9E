/*
 * =====================================================================================
 *
 *       Filename:  Employee.hpp
 *
 *    Description:  Exercise 3.14 - Employee Class.
 *
 *        Version:  1.0
 *        Created:  21/03/16 02:41:34
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
#include <string>

class Employee {
 private:
    std::string firstName;
    std::string lastName;
    int monthlySalary;

 public:
    Employee(const std::string &, const std::string&, int);

    // SETTERS
    void setFirstName(const std::string &);
    void setLastName(const std::string &);
    void setMonthlySalary(int);

    // GETTERS
    std::string getFirstName() const;
    std::string getLastName() const;
    int getMonthlySalary() const;
    int calculateSalary(int) const;

    void giveRaise(int);

    void showEmployee() const;
};
