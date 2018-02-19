/*
 * =====================================================================================
 *
 *       Filename:  ex_1623.cpp
 *
 *    Description:  Exercise 16.23 - Throwing the Result of a Coditional
 *                  Expression
 *
 *        Version:  1.0
 *        Created:  27/10/16 16:08:51
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <stdexcept>

int main(int argc, const char *argv[]) {
    try {
        int i = 6;
        double d = 6.5;

        false ? throw i : throw d;  // double should throw
    } catch (int &i) {
        std::cout << "i was thrown" << std::endl;
    } catch (double &d) {
        std::cout << "d was thrown" << std::endl;
    }
    return 0;
}
