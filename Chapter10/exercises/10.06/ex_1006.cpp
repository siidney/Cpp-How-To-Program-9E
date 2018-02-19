/*
 * =====================================================================================
 *
 *       Filename:  ex_1006.cpp
 *
 *    Description:  Exercise 10.6: Date Class Modification
 *
 *        Version:  1.0
 *        Created:  28/06/16 15:53:22
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#include "Date.hpp"

int main(int argc, const char *argv[]) {
    Date d1;
    Date d2("February", 14, 1952);

    d1.printDayYear();
    printf("\n");
    d1.printShort();
    printf("\n");
    d1.printLong();
    printf("\n\n");

    d2.printDayYear();
    printf("\n");
    d2.printShort();
    printf("\n");
    d2.printLong();
    std::cout << std::endl;

    return 0;
}
