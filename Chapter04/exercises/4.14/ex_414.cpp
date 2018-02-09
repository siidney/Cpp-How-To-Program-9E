/*
 * =====================================================================================
 *
 *       Filename:  ex_414.cpp
 *
 *    Description:  Exercise 4.14 - Credit Limits
 *
 *        Version:  1.0
 *        Created:  27/03/16 01:02:27
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "CreditLimits.hpp"

const static int QUIT = -1;

int main(int argc, const char *argv[]) {
    CreditLimits cl;

    while (cl.getAccountNumber() != QUIT) {
        cl.run();
    }
    return 0;
}
