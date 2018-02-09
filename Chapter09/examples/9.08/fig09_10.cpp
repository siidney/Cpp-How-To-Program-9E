/*
 * =====================================================================================
 *
 *       Filename:  fig09_10.cpp
 *
 *    Description:  Fig. 9.10: Demonstrating a default constructor for class
 *                  Time
 *
 *        Version:  1.0
 *        Created:  07/06/16 16:57:58
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Time.hpp"

#include <iostream>
#include <stdexcept>

int main(int argc, const char *argv[]) {
    Time t1;
    Time t2(2);
    Time t3(21, 34);
    Time t4(12, 25, 42);

    std::cout << "Constructed with:\n\nt1: all arguments defaulted\n ";
    t1.printUniversal();
    std::cout << std::endl;
    t1.printStandard();

    std::cout << "\n\nt2: hour specified; minute and second defaulted\n ";
    t2.printUniversal();
    std::cout << std::endl;
    t2.printStandard();

    std::cout << "\n\nt3: hour and minute specified; second defaulted\n ";
    t3.printUniversal();
    std::cout << std::endl;
    t3.printStandard();

    std::cout << "\n\nt4: hour, minute and second specified\n ";
    t4.printUniversal();
    std::cout << std::endl;
    t4.printStandard();

    // attempt to initialise t5 with invalid values
    try {
        Time t5(27, 74, 99);
    } catch (std::invalid_argument &e) {
        std::cout << "\n\nException while initialising t5: " << e.what()
                  << std::endl;
    }

    return 0;
}
