/*
 * =====================================================================================
 *
 *       Filename:  CommissionEmployee.h
 *
 *    Description:  Fig. 12.4: CommissionEmployee class definiton represetnts a
 *                  commission employee.
 *
 *        Version:  1.0
 *        Created:  18/07/16 17:24:04
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

class CommissionEmployee {
 public:
    CommissionEmployee(const std::string&, const std::string&,
                       const std::string&, double = 0.0f, double = 0.0f);

    void setFirstName(const std::string&);
    std::string getFirstName() const;

    void setLastName(const std::string&);
    std::string getLastName() const;

    void setSocialSecurityNumber(const std::string&);
    std::string getSocialSecurityNumber() const;

    void setGrossSales(double);
    double getGrossSales() const;

    void setCommissionRate(double);
    double getCommissionRate() const;

    double earnings() const;
    void print() const;

 private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
    double grossSales;
    double commissionRate;
};
