/*
 * =====================================================================================
 *
 *       Filename:  CommissionEmployee.h
 *
 *    Description:  Fig. 13.4: CommissionEmployee class definition represents a
 *                  commission employee.
 *
 *        Version:  1.0
 *        Created:  12/08/16 18:28:07
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
                       const std::string&, double, double);

    void setFirstName(const std::string&);
    std::string getFirstName() const;

    void setLastName(const std::string&);
    std::string getLastName() const;

    void setSocialSecurityNumber(const std::string&);
    std::string getSocialSecurityNumber() const;

    void setGrossSales(double);
    double getGrossSales();

    void setCommissionRate(double);
    double getCommissionRate() const;

    virtual double earnings() const;
    virtual void print() const;

 private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
    double grossSales;
    double commissionRate;
};
