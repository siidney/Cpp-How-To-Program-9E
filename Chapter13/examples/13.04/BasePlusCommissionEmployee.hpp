/*
 * =====================================================================================
 *
 *       Filename:  BasePlusCommissionEmployee.h
 *
 *    Description:  Fig. 13.5: BasePlusCommissionEmployee class derived from
 *                  class CommissionEmployee.
 *
 *        Version:  1.0
 *        Created:  12/08/16 18:32:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include "CommissionEmployee.hpp"

#include <string>

class BasePlusCommissionEmployee : public CommissionEmployee {
 public:
    BasePlusCommissionEmployee(const std::string&,
                               const std::string& const std::string&,
                               double = 0.0f, double = 0.0f, double = 0.0f);

    void setBaseSalary(double);
    double getBaseSalary() const;

    virtual double earnings() const;
    virtual void print() const;

 private:
    double baseSalary;
};
