/*
 * =====================================================================================
 *
 *       Filename:  BasePlusCommissionEmployee.h
 *
 *    Description:  Fig. 12.10: BasePlusCommissionEmployee class derived from
 *                  class CommissionEmployee.
 *
 *        Version:  1.0
 *        Created:  18/07/16 18:44:32
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
    BasePlusCommissionEmployee(const std::string&, const std::string&,
                               const std::string&, double = 0.0f, double = 0.0f,
                               double = 0.0f);

    void setBaseSalary(double);
    double getBaseSalary() const;

    double earnings() const;
    void print() const;

 private:
    double baseSalary;
};
