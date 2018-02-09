/*
 * =====================================================================================
 *
 *       Filename:  fig13_02.cpp
 *
 *    Description:  Fig. 13.2: Aiming a derived-class pointer at a base class
 *                  object.
 *
 *        Version:  1.0
 *        Created:  12/08/16 17:31:59
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

int main(int argc, const char *argv[]) {
    CommissionEmployee commissionEmployee("Sue", "Jones", "222-22-2222", 10000,
                                          .06);
    BasePlusCommissionEmployee *basePlusCommissionEmployeePtr = 0;

    // aim derived-class pointer at base-class object
    // Error: a CommissionEmployee is not a BasePlusCommissionEmployee
    basePlusCommissionEmployeePtr = &commissionEmployee;
    return 0;
}
