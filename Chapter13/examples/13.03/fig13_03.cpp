/*
 * =====================================================================================
 *
 *       Filename:  fig13_03.cpp
 *
 *    Description:  Fig. 13.3: Attempting to invoke derived-class-only member
 *                  functions through a base-class pointer.
 *
 *        Version:  1.0
 *        Created:  12/08/16 17:39:44
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "BasePlusCommissionEmployee.hpp"
#include "CommissionEmployee.hpp"

#include <string>

int main(int argc, const char *argv[]) {
    CommissionEmployee *commissionEmployeePtr = 0;  // base class
    BasePlusCommissionEmployee basePlusCommissionEmployee(
        "Bob", "Lewis", "333-33-3333", 5000, .04, 300);

    // aim base-class pointer at derived-class object
    commissionEmployeePtr = &basePlusCommissionEmployee;

    // invoke base-class member functions on derived-class
    // object through base-class pointer (allowed)
    std::string firstName = commissionEmployeePtr->getFirstName();
    std::string lastName = commissionEmployeePtr->getLastName();
    std::string ssn = commissionEmployeePtr->getSocialSecurityNumber();
    double grossSales = commissionEmployeePtr->getGrossSales();
    doule commissionRate = commissionEmployeePtr->getCommissionRate();

    // attempt to invoke derived-class-only member functions
    // on derived-class object through base-class pointer (disallowed)
    double baseSalary = commissionEmployeePtr->getBaseSalary();
    commissionEmployeePtr->setBaseSalary(500);

    return 0;
}
