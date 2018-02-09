/*
 * =====================================================================================
 *
 *       Filename:  fig09_19.cpp
 *
 *    Description:  Fig. 9.19: Demonstrating that class objects can be assigned
 *                  to each other using default memberwise arguments.
 *
 *        Version:  1.0
 *        Created:  09/06/16 13:42:37
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Date.hpp"

#include <iostream>

int main(int argc, const char *argv[]) {
    Date date1(7, 4, 2004);
    Date date2;  // defaults to 1/1/200

    std::cout << "date1 = ";
    date1.print();

    std::cout << "\ndate2 = ";
    date2.print();

    date2 = date1;

    std::cout << "\n\nAfter default memberwise assignment, date2 = ";

    date2.print();

    std::cout << std::endl;
    return 0;
}
