/*
 * =====================================================================================
 *
 *       Filename:  Employee.cpp
 *
 *    Description:  Fig. 10.11: Employee class member-function definition
 *
 *        Version:  1.0
 *        Created:  18/06/16 00:44:09
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Employee.hpp"
#include "Date.hpp"

#include <iostream>

Employee::Employee(const std::string& first, const std::string& last,
                   const Date& dateOfBirth, const Date& dateOfHire)
    : firstName(first),
      lastName(last),
      birthDate(dateOfBirth),
      hireDate(dateOfHire) {
    // output Emplotee object to show when constructor is called
    std::cout << "Employee object constructor: " << firstName << ' ' << lastName
              << std::endl;
}
Employee::~Employee() {
    std::cout << "Employee object destructor : " << lastName << ' ' << firstName
              << std::endl;
}
// print Employee object
void Employee::print() const {
    std::cout << lastName << ", " << firstName << " Hired: ";
    hireDate.print();
    std::cout << " Birthday: ";
    birthDate.print();
    std::cout << std::endl;
}
