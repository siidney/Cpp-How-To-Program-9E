/*
 * =====================================================================================
 *
 *       Filename:  ex_1628.cpp
 *
 *    Description:  Exercise 16.28 - Constructors Throwing Exceptions
 *
 *        Version:  1.0
 *        Created:  27/10/16 18:24:18
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

class C1 {
 public:
    C1() { throw 99; }
};

int main(int argc, const char *argv[]) {
    try {
        C1 c;
    } catch (int &e) {
        std::cerr << "Exception: " << e << std::endl;
    }
    return 0;
}
