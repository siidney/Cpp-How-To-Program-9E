/*
 * =====================================================================================
 *
 *       Filename:  ex_312.cpp
 *
 *    Description:  Exercise 3.12 - Account Class
 *
 *        Version:  1.0
 *        Created:  21/03/16 00:20:35
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#include "Account.hpp"

int main(int argc, const char *argv[]) {
    Account acc1(500);
    Account acc2(1500);

    std::cout << "acc1 initial balance: " << acc1.getBalance() << std::endl;
    std::cout << "acc2 initial balance: " << acc2.getBalance() << std::endl;

    acc1.credit(150);
    acc1.debit(50);

    acc2.credit(500);
    acc2.debit(2000);

    std::cout << "acc1 new balance: " << acc1.getBalance() << std::endl;
    std::cout << "acc2 new balance: " << acc2.getBalance() << std::endl;
    return 0;
}
