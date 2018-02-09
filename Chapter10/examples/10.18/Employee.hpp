/*
 * =====================================================================================
 *
 *       Filename:  Employee.h
 *
 *    Description:  Fig. 10.18: Employee class definition with a static data
 *                  member to track the number of Employee objects in memory.
 *
 *        Version:  1.0
 *        Created:  22/06/16 16:47:11
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

class Employee {
 public:
    Employee(const std::string&, const std::string&);
    ~Employee();

    std::string getFirstName() const;
    std::string getLastName() const;

    static int getCount();

 private:
    std::string firstName;
    std::string lastName;

    static int count;
};
