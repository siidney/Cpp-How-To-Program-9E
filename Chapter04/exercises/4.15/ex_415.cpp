/*
 * =====================================================================================
 *
 *       Filename:  ex_415.cpp
 *
 *    Description:  Exercise 4.15 - Sales Commission Calculator
 *
 *        Version:  1.0
 *        Created:  27/03/16 01:27:06
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "SalesCommissionCalculator.hpp"

static const int QUIT = -1;

int main(int argc, const char *argv[]) {
    SalesCommissionCalculator scc;

    while (scc.getWeeklySales() != QUIT) {
        scc.run();
    }
    return 0;
}
