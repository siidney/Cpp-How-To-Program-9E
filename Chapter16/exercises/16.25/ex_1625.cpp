/*
 * =====================================================================================
 *
 *       Filename:  ex_1625.cpp
 *
 *    Description:  Exercise 16.25 - Member Object Destructors
 *                  NOTE: Didn't fully understand this question. This seems to
 *                  do the job though.
 *
 *        Version:  1.0
 *        Created:  27/10/16 16:51:13
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

class C1 {
 public:
    C1() { std::cout << "C1 Constructor" << std::endl; }
    ~C1() { std::cout << "C1 Destructor" << std::endl; }
};

class C2 {
 public:
    C2() { std::cout << "C2 Constructor" << std::endl; }
    ~C2() { std::cout << "C2 Destructor" << std::endl; }
};

class C3 {
 public:
    C3() {
        std::cout << "C3 Constructor" << std::endl;
        C1 c1;

        throw std::exception();

        C2 c2;
    }
    ~C3() { std::cout << "C3 Destructor" << std::endl; }
};

int main(int argc, const char *argv[]) {
    try {
        C3 c3;
    } catch (std::exception &e) {
        std::cout << "exception: " << e.what() << std::endl;
    }

    return 0;
}
