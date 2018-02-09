/*
 * =====================================================================================
 *
 *       Filename:  fig09_07.cpp
 *
 *    Description:  Fig. 9.7: Utility function demonstration
 *
 *        Version:  1.0
 *        Created:  07/06/16 16:44:07
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "SalesPerson.hpp"

int main(int argc, const char *argv[]) {
    SalesPerson s;

    s.getSalesFromUser();
    s.printAnnualSales();

    return 0;
}
