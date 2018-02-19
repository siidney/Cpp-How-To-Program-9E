/*
 * =====================================================================================
 *
 *       Filename:  ex_1622.cpp
 *
 *    Description:  Exercise 16.22 - Catching Derived-Class Exceptions
 *
 *        Version:  1.0
 *        Created:  27/10/16 15:24:49
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

class B {};
class D : public B, public std::runtime_error {
 public:
    D() : std::runtime_error("runtime_error D") {}
};

int main(int argc, const char *argv[]) {
    D derived;

    try {
        throw derived;
    } catch (B &b) {
        std::cout << "Caught base class" << std::endl;
    } catch (D &d) {
        std::cout << "caught derived class" << std::endl;
        std::cout << d.what() << std::endl;
    }

    return 0;
}
