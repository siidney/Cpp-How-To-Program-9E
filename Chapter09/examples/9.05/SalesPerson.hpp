/*
 * =====================================================================================
 *
 *       Filename:  SalesPerson.h
 *
 *    Description:  Fig. 9.5: SalesPerson class definition
 *
 *        Version:  1.0
 *        Created:  07/06/16 16:33:43
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

class SalesPerson {
 public:
    static const int monthsPerYear = 12;

    SalesPerson();

    void getSalesFromUser();
    void setSales(int, double);
    void printAnnualSales();

 private:
    double totalAnnualSales();
    double sales[monthsPerYear];
};
