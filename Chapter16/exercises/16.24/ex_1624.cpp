/*
 * =====================================================================================
 *
 *       Filename:  ex_1624.cpp
 *
 *    Description:  Exercise 16.24 - Local Variable Destructors
 *
 *        Version:  1.0
 *        Created:  27/10/16 16:32:35
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <exception>

class C1 {
 public:
    C1() { std::cout << "C1 constructor" << std::endl; }
    ~C1() { std::cout << "C1 destructor" << std::endl; }
};
class C2 {
 public:
    C2() { std::cout << "C2 constructor" << std::endl; }
    ~C2() { std::cout << "C2 destructor" << std::endl; }
};

int main(int argc, const char *argv[]) {
    try {
        C1 c1;
        C2 c2;

        throw std::exception();
    } catch (std::exception &e) {
        std::cout << "exception: " << e.what() << std::endl;
    }

    return 0;
}
