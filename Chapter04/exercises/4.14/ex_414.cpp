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
#include "CreditLimits.h"

int main(int argc, const char *argv[]) {
    CreditLimits cl;

    while (cl.getAccountNumber() != -1) {
        cl.run();
    }
    return 0;
}
