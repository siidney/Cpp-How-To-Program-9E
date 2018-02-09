/*
 * =====================================================================================
 *
 *       Filename:  fig10_12.cpp
 *
 *    Description:  Fig. 10.12: Demonstrating composition--an object with member
 *                  objects.
 *
 *        Version:  1.0
 *        Created:  18/06/16 00:48:39
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
    Date birth(7, 24, 1949);
    Date hire(3, 12, 1988);
    Employee manager("Bob", "Blue", birth, hire);

    std::cout << std::endl;

    manager.print();

    return 0;
}
