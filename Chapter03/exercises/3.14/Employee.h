/*
 * =====================================================================================
 *
 *       Filename:  Employee.h
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

class Employee{
    private:
        std::string firstName;
        std::string lastName;
        int monthlySalary;

    public:
        Employee(std::string, std::string, int);

        // SETTERS
        void setFirstName(std::string);
        void setLastName(std::string);
        void setMonthlySalary(int);

        // GETTERS
        std::string getFirstName();
        std::string getLastName();
        int getMonthlySalary();
        int calculateSalary(int);

        void giveRaise(int);

        void showEmployee();
};
