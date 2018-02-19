/*
 * =====================================================================================
 *
 *       Filename:  ex_1009.cpp
 *
 *    Description:  Exercise 10.09: Time Class Modification
 *
 *        Version:  1.0
 *        Created:  04/07/16 14:21:47
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#include "Time.hpp"

int main(int argc, const char *argv[]) {
    Time t1(13, 25, 59);
    Time t2(7, 51, 12);

    t1.printUniversal();
    printf("\n");
    t2.printUniversal();
    printf("\n");
    t1.printStandard();
    printf("\n");
    t2.printStandard();

    std::cout << std::endl;
    return 0;
}
