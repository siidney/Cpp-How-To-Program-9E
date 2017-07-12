/*
 * =====================================================================================
 *
 *       Filename:  Employee.cpp
 *
 *    Description:  Exercise 3.14 - Employee Class
 *
 *        Version:  1.0
 *        Created:  21/03/16 02:44:19
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Employee.h"

Employee::Employee(std::string fName, std::string lName, int mSalary) {
    setFirstName(fName);
    setLastName(lName);
    setMonthlySalary(mSalary);
}

// SETTERS
void Employee::setFirstName(std::string fName) { firstName = fName; }
void Employee::setLastName(std::string lName) { lastName = lName; }
void Employee::setMonthlySalary(int mSalary) {
    monthlySalary = (mSalary > 0) ? mSalary : 0;
}
// GETTERS
std::string Employee::getFirstName() { return firstName; }
std::string Employee::getLastName() { return lastName; }
int Employee::getMonthlySalary() { return monthlySalary; }
int Employee::calculateSalary(int months) { return monthlySalary * months; }
void Employee::giveRaise(int percent) {
    monthlySalary += (monthlySalary / 100) * percent;
}
void Employee::showEmployee() {
    std::cout << "Name: " << getFirstName() << " " << getLastName();
    std::cout << "\nMonthly Salary: " << getMonthlySalary();
    std::cout << "\nYearly Salary: " << calculateSalary(12) << std::endl;
    std::cout << std::endl;
}
