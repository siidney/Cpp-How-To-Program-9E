/*
 * =====================================================================================
 *
 *       Filename:  ex_314.cpp
 *
 *    Description:  Exercise 3.14 - Employee Class
 *
 *        Version:  1.0
 *        Created:  21/03/16 02:51:14
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#include "Employee.hpp"

int main(int argc, const char *argv[]) {
    Employee emp1("Bob", "Bobson", 1200);
    Employee emp2("Sue", "Sueson", 2000);

    emp1.showEmployee();
    emp2.showEmployee();

    emp1.giveRaise(10);
    emp2.giveRaise(10);

    emp1.showEmployee();
    emp2.showEmployee();
    return 0;
}
