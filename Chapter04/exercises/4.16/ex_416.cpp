/*
 * =====================================================================================
 *
 *       Filename:  ex_416.cpp
 *
 *    Description:  Exercise 4.16 - Salary Calculator
 *
 *        Version:  1.0
 *        Created:  27/03/16 01:45:44
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "SalaryCalculator.h"

int main(int argc, const char *argv[]) {
    SalaryCalculator sc;

    while (sc.getHoursWorked() != -1) {
        sc.run();
    }
    return 0;
}
