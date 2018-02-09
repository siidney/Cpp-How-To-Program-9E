/*
 * =====================================================================================
 *
 *       Filename:  fig12_06.cpp
 *
 *    Description:  Fig. 12.6: Testing class CommissionEmployee
 *
 *        Version:  1.0
 *        Created:  18/07/16 17:39:49
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "CommissionEmployee.hpp"

#include <iomanip>
#include <iostream>

int main(int argc, const char *argv[]) {
    CommissionEmployee employee("Sue", "Jones", "222-22-2222", 10000, .06);

    // set floating-point output formatting
    std::cout << std::fixed << std::setprecision(2);

    // get commission employee data
    std::cout << "Employee information obtained by get functions:\n"
              << "\nFirst name is " << employee.getFirstName()
              << "\nLast name is " << employee.getLastName()
              << "\n Social security number is "
              << employee.getSocialSecurityNumber() << "\nGross sales is "
              << employee.getGrossSales() << "\nCommissionRate is "
              << employee.getCommissionRate() << std::endl;

    employee.setGrossSales(8000);
    employee.setCommissionRate(.1);

    std::cout << "\nUpdated employee information output by print function:\n"
              << std::endl;
    employee.print();

    std::cout << "\n\nEmployee's earnings: $" << employee.earnings()
              << std::endl;

    return 0;
}
